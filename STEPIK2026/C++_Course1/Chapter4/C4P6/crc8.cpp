#include <iostream>
#include <stdint.h>
using namespace std;

static uint8_t trampCrc(uint8_t *frame)
{
    uint8_t crc = 0;
    const uint8_t *p = (const uint8_t *)frame;
    const uint8_t *pEnd = p + (2 + 12);
    for (; p != pEnd; p++) {
        crc += *p;
    }
    return crc;
}

int main(){
    // uint8_t arr[13] = {0X50, 0X19, 0X00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; //25 mW
    // uint8_t arr[13] = {0X46, 0XCE, 0X0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; //3310 mHz
    uint8_t arr[13] = {0X46, 0XB6, 0X0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; //3510 mHz
    // uint8_t arr[13] = {0X46, 0X6A, 0X0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; //3050 mHz A1
    uint8_t crc = trampCrc(arr);
    // cout << crc << endl;
    printf("%x\n", crc);
    return 0;
}