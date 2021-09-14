#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "CryptoThings"
#define PRODUCT_NAME "CryptoThings M4"
#define VOLUME_LABEL "MY_M4_BOARD"
#define INDEX_URL "http://cryptothings.com/"
#define BOARD_ID "SAMD51G19A-M4-RT-v10"

#define USB_VID 0x03eb
#define USB_PID 0x2404

#define LED_PIN PIN_PA15

#define BOOT_USART_MODULE                 SERCOM3
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA22C_SERCOM3_PAD0
#define BOOT_USART_PAD0                   PINMUX_PA23C_SERCOM3_PAD1
#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

#endif
