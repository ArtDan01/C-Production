#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CRSF_SYNC_BYTE          0xC8
#define CRSF_FRAMETYPE_LINK_STATISTICS 0x14
#define CRSF_LINK_STATS_PAYLOAD_LEN     10

// Итоговая структура с распарсенными данными
typedef struct {
    uint8_t  uplink_rssi_ant1;   // dBm (значение отрицательное, но идёт как uint, надо инвертировать знак при выводе)
    uint8_t  uplink_rssi_ant2;   // dBm
    uint8_t  uplink_link_quality;// %
    int8_t   uplink_snr;         // dB, со знаком
    uint8_t  active_antenna;     // 0 или 1
    uint8_t  rf_mode;            // индекс режима (см. таблицу ниже)
    uint8_t  uplink_tx_power;    // индекс мощности (см. таблицу ниже)
    uint8_t  downlink_rssi;      // dBm
    uint8_t  downlink_link_quality; // %
    int8_t   downlink_snr;       // dB
} crsf_link_stats_t;

// Таблица индексов мощности передатчика (значения в мВт)
static const uint16_t crsf_tx_power_table[] = {
    0, 10, 25, 100, 500, 1000, 2000, 250, 50
};

// Таблица RF-режимов (для стандартной ELRS/Crossfire прошивки, может отличаться в зависимости от вендора)
static const char* crsf_rf_mode_table[] = {
    "4Hz", "50Hz", "150Hz", "250Hz", "500Hz", "1000Hz", "50Hz(F)", "150Hz(F)"
};

// CRC8, полином 0xD5 (DVB-S2), таблица считается на лету
static uint8_t crsf_crc8(const uint8_t *data, uint8_t len)
{
    uint8_t crc = 0;
    for (uint8_t i = 0; i < len; i++) {
        crc ^= data[i];
        for (uint8_t b = 0; b < 8; b++) {
            if (crc & 0x80)
                crc = (uint8_t)((crc << 1) ^ 0xD5);
            else
                crc <<= 1;
        }
    }
    return crc;
}

/*
 * Парсинг CRSF-пакета Link Statistics.
 * buf       — указатель на начало пакета (с sync byte)
 * buf_len   — сколько байт реально доступно в buf
 * out       — куда сложить распарсенные данные
 * return: 0 = OK, <0 = ошибка (см. коды ниже)
 */
int crsf_parse_link_stats(const uint8_t *buf, uint16_t buf_len, crsf_link_stats_t *out)
{
    if (buf_len < 4)
        return -1; // слишком коротко даже для заголовка

    // (опционально) проверка sync byte — раскомментируй если нужен строгий фильтр
    // if (buf[0] != CRSF_SYNC_BYTE) return -2;

    uint8_t frame_len = buf[1]; // type + payload + crc
    if (frame_len < 2 || (uint16_t)(frame_len + 2) > buf_len)
        return -3; // некорректная длина или пакет обрезан

    uint8_t frame_type = buf[2];
    if (frame_type != CRSF_FRAMETYPE_LINK_STATISTICS)
        return -4; // это не Link Statistics пакет

    uint8_t payload_len = frame_len - 2; // минус type и crc
    if (payload_len != CRSF_LINK_STATS_PAYLOAD_LEN)
        return -5; // неожиданная длина payload

    const uint8_t *payload = &buf[3];
    uint8_t crc_received = buf[3 + payload_len];

    // CRC считается от type + payload (buf[2] .. buf[3+payload_len-1])
    uint8_t crc_calc = crsf_crc8(&buf[2], (uint8_t)(payload_len + 1));
    if (crc_calc != crc_received)
        return -6; // ошибка CRC

    out->uplink_rssi_ant1    = payload[0];
    out->uplink_rssi_ant2    = payload[1];
    out->uplink_link_quality = payload[2];
    out->uplink_snr          = (int8_t)payload[3];
    out->active_antenna      = payload[4];
    out->rf_mode             = payload[5];
    out->uplink_tx_power     = payload[6];
    out->downlink_rssi       = payload[7];
    out->downlink_link_quality = payload[8];
    out->downlink_snr        = (int8_t)payload[9];

    return 0;
}

// Пример вывода для отладки
void crsf_print_link_stats(const crsf_link_stats_t *s)
{
    uint16_t tx_pwr_mw = (s->uplink_tx_power < sizeof(crsf_tx_power_table)/sizeof(crsf_tx_power_table[0]))
                         ? crsf_tx_power_table[s->uplink_tx_power] : 0;

    printf("Uplink:   RSSI1=-%u dBm  RSSI2=-%u dBm  LQ=%u%%  SNR=%d dB\n",
           s->uplink_rssi_ant1, s->uplink_rssi_ant2, s->uplink_link_quality, s->uplink_snr);
    printf("Downlink: RSSI=-%u dBm  LQ=%u%%  SNR=%d dB\n",
           s->downlink_rssi, s->downlink_link_quality, s->downlink_snr);
    printf("Antenna=%u  TX power=%u mW  ", s->active_antenna, tx_pwr_mw);

    if (s->rf_mode < sizeof(crsf_rf_mode_table)/sizeof(crsf_rf_mode_table[0]))
        printf("RF mode=%s\n", crsf_rf_mode_table[s->rf_mode]);
    else
        printf("RF mode=idx%u\n", s->rf_mode);
}

// Пример использования
int main(void)
{
    // пример сырого пакета (замени на свой массив)
    uint8_t raw[] = {0xC8, 0x0C, 0x14, 0x78, 0x6F, 0x60, 0xFB, 0x01, 0x02, 0x08, 0x00, 0x00, 0x00, 0x12};

    crsf_link_stats_t stats;
    int err = crsf_parse_link_stats(raw, sizeof(raw), &stats);
    if (err == 0) {
        crsf_print_link_stats(&stats);
    } else {
        printf("Parse error: %d\n", err);
    }
    return 0;
}