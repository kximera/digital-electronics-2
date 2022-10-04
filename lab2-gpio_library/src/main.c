/***********************************************************************
 * 
 * Blink a LED in Arduino-style and use function from the delay library.
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2022 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/


/* Defines -----------------------------------------------------------*/
#include <gpio.h>
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
#define LED_RED PB0
                        // is connected

#define SHORT_DELAY 600 // Delay in milliseconds
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops
#include <gpio.h>



// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
//#include "Arduino.h"
//#define PB5 13          // In Arduino world, PB5 is called "13"
//#define PB0 8 
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
int main(void)
{
    uint8_t led_value = 0;  // Local variable to keep LED status

    // Set pin where on-board LED is connected as output
    //pinMode(LED_GREEN, OUTPUT);
    //pinMode(LED_RED, OUTPUT);
    //DDRB = DDRB | (1<<LED_GREEN);
    //           0000 0001 ... number 1 in library
    //           0010 0000 ... mask after shift
    //      0100 1101 ... let the current register value
    //  |   0010 0000 ... ORing by my mask
    //  -----------------------------------
    //      0110 1101
        GPIO_mode_output(&DDRB, LED_GREEN);

    //      GPIO_config_output(&DDRB, LED_GREEN);
    //      Set second pin as output
    //      pincode(LED_RED, );

    GPIO_mode_output(&DDRB, LED_RED);
    //DDRB = DDRB | (1<<LED_RED);




    // Infinite loop
    while (1)
    {
        // Turn ON/OFF on-board LED
        //digitalWrite(LED_GREEN, led_value);
        //digitalWrite(LED_RED, led_value);

        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);

        // Change LED value
        if (led_value == 0){
            led_value = 1;
            GPIO_write_high(&PORTB, LED_GREEN);
            GPIO_write_high(&PORTB, LED_RED);
            //set pins to HIGH
            //PORTB = PORTB | (1<<LED_GREEN);
            //PORTB = PORTB | (1<<LED_RED);
        }else{
            led_value = 0;

            // clear pins to low

            GPIO_write_low(&PORTB, LED_GREEN);
            GPIO_write_low(&PORTB, LED_RED);
            //PORTB = PORTB &~(1<<LED_GREEN);
            //PORTB = PORTB &~(1<<LED_RED);
            }

    }

    // Will never reach this
    return 0;
}