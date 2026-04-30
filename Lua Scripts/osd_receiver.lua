function update()
    local voltage = analog:pin(2)  -- Замените 2 на номер нужного пина

    if voltage > 3.3 then  -- Проверяем, что напряжение выше порога (например, 3.3V)
        gcs:send_text(6, "720 Mhz")  -- Отправляет сообщение на OSD при высоком уровне
    else
        gcs:send_text(6, "980 Mhz")  -- Сообщение при низком уровне напряжения
    end

    return update, 1000  -- Повторяет функцию каждую секунду (1000 мс)
end

return update