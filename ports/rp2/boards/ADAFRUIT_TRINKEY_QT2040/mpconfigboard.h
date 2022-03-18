// https://www.adafruit.com/product/5056
// https://github.com/adafruit/circuitpython/blob/main/ports/raspberrypi/boards/adafruit_qt2040_trinkey/mpconfigboard.h
// https://learn.adafruit.com/adafruit-trinkey-qt2040/pinouts

#define MICROPY_HW_BOARD_NAME          "Adafruit Trinkey QT2040"
#define MICROPY_HW_FLASH_STORAGE_BYTES (7 * 1024 * 1024)

#define MICROPY_HW_NEOPIXEL (&pin_GPIO27)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO17)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO16)

#define DEFAULT_UART_BUS_RX (&pin_GPIO17)
#define DEFAULT_UART_BUS_TX (&pin_GPIO16)
