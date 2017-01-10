#ifndef RASPBERRY_PI_H
#define RASPBERRY_PI_H

#include "sprinkio.h"

// UART macros
#define UART_SELECT_PIN RPI_V2_GPIO_P1_15
#define UART_SELECT_EN() bcm2835_gpio_fsel(UART_SELECT_PIN, BCM2835_GPIO_FSEL_OUTP);
#define UART_ATMEL_EN() bcm2835_gpio_write(UART_SELECT_PIN, HIGH);
#define UART_LCD_EN() bcm2835_gpio_write(UART_SELECT_PIN, LOW);

// Rotary encoder macros
#define ROTARY_ENCODER_GPIO_A 4
#define ROTARY_ENCODER_GPIO_B 5
#define ROTARY_ENCODER_PIN_A RPI_V2_GPIO_P1_16
#define ROTARY_ENCODER_PIN_B RPI_V2_GPIO_P1_18
#define ROTARY_ENCODER_PIN_A_EN() bcm2835_gpio_fsel(ROTARY_ENCODER_PIN_A, BCM2835_GPIO_FSEL_INPT);
#define ROTARY_ENCODER_PIN_B_EN() bcm2835_gpio_fsel(ROTARY_ENCODER_PIN_B, BCM2835_GPIO_FSEL_INPT);
#define ROTARY_ENCODER_PIN_A_LEV() bcm2835_gpio_lev(ROTARY_ENCODER_PIN_A);
#define ROTARY_ENCODER_PIN_B_LEV() bcm2835_gpio_lev(ROTARY_ENCODER_PIN_B);

// Button macros
#define BUTTON_GPIO 6
#define BUTTON_PIN RPI_V2_GPIO_P1_22
#define BUTTON_EN() bcm2835_gpio_fsel(BUTTON_PIN, BCM2835_GPIO_FSEL_INPT);
#define BUTTON_LEV() bcm2835_gpio_lev(BUTTON_PIN);

#endif