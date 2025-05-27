#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 13;
static const uint8_t SCL = 14;

// Modified elsewhere
static const uint8_t SS = 21;
static const uint8_t MOSI = 14;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;

static const uint8_t G0 = 0;
static const uint8_t G1 = 1;
static const uint8_t G2 = 2;
static const uint8_t G3 = 3;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G6 = 6;
static const uint8_t G7 = 7;
static const uint8_t G8 = 8;
static const uint8_t G9 = 9;
static const uint8_t G10 = 10;
static const uint8_t G11 = 11;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G14 = 14;
static const uint8_t G15 = 15;
static const uint8_t G39 = 39;
static const uint8_t G40 = 40;
static const uint8_t G41 = 41;
static const uint8_t G42 = 42;
static const uint8_t G43 = 43;
static const uint8_t G44 = 44;
static const uint8_t G46 = 46;

static const uint8_t ADC1 = 7;
static const uint8_t ADC2 = 8;

#define SERIAL_RX 44
#define SERIAL_TX 43
#define BAD_RX SERIAL_RX
#define BAD_TX SERIAL_TX
#define USB_as_HID 1

#define BUZZ_PIN 11

#define BTN_ALIAS	'"OK"'
// #define HAS_5_BUTTONS
// #define R_BTN       40
// #define L_BTN       39
#define HAS_3_BUTTONS
#define SEL_BTN 6 // B
#define UP_BTN  9 // D
#define DW_BTN  5 // A
#define BTN_ACT     LOW

#define RXLED	47
#define LED     48
#define LED_ON	HIGH
#define LED_OFF	LOW

#define USE_CC1101_VIA_SPI
#define CC1101_GDO0_PIN	47
#define CC1101_GDO2_PIN 48 
#define CC1101_SS_PIN	21
#define CC1101_MOSI_PIN	SPI_MOSI_PIN
#define CC1101_SCK_PIN	SPI_SCK_PIN
#define CC1101_MISO_PIN	SPI_MISO_PIN

#define USE_NRF24_VIA_SPI
#define NRF24_CE_PIN    47
#define NRF24_SS_PIN	21 
#define NRF24_MOSI_PIN	SPI_MOSI_PIN
#define NRF24_SCK_PIN	SPI_SCK_PIN
#define NRF24_MISO_PIN	SPI_MISO_PIN

#define FP	1
#define FM	2
#define FG	3

#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT (uint8_t)1

#define USER_SETUP_LOADED	1
#define ST7789_DRIVER	    1
#define TFT_RGB_ORDER	    0
#define TFT_WIDTH	        240
#define TFT_HEIGHT	        280
#define TFT_BACKLIGHT_ON	1
#define TFT_BL	            46
#define TFT_RST	            -1
#define TFT_DC	            15
#define TFT_MOSI	        17
#define TFT_MISO 			-1
#define TFT_SCLK	        18
#define TFT_CS	            7
#define SMOOTH_FONT	        1
#define SPI_FREQUENCY	    40000000
#define SPI_READ_FREQUENCY	16000000


#define SDCARD_CS	16
#define SDCARD_SCK	18
#define SDCARD_MISO	8
#define SDCARD_MOSI	17

#define GROVE_SDA	13
#define GROVE_SCL	14

#define SPI_SCK_PIN	    12
#define SPI_MOSI_PIN	14
#define SPI_MISO_PIN	13
#define SPI_SS_PIN	    21

#endif /* Pins_Arduino_h */
