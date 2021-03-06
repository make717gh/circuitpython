#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_B1), MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_B2), MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_B3), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_B4), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_BUZZER), MP_ROM_PTR(&pin_PA16) },    
    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_PA17) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_PA18) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_PA0), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_PA1), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_PB9), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_PA3), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_PA4), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_PA6), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_PA7), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_A7), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_PA8), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_PA9), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_PA12), MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_PA13), MP_ROM_PTR(&pin_PA13) },
    { MP_ROM_QSTR(MP_QSTR_PA18), MP_ROM_PTR(&pin_PA18) },
    { MP_ROM_QSTR(MP_QSTR_PA19), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_PB11), MP_ROM_PTR(&pin_PB11) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
