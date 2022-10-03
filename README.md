# Lab 1: JESÚS SANTOS

### Morse code
```

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected
#define DOT_DELAY 200     // Delay (ms) for "."

#define COMMA_DELAY 600     // Delay (ms) for ","

#define DOT_CHAR_DELAY 200     // Delay between a "." and a "," (in morse code, comma delay has to be the triple of the dot delay)

#define CHAR_DELAY 600     // Delay between two chars

#define PB5 13

#include "Arduino.h"

int main(void)
{
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code

            digitalWrite(LED_GREEN, HIGH); // Turn on LED
    		_delay_ms(DOT_DELAY); // Delay (ms) for "."
    		digitalWrite(LED_GREEN, LOW); //Turn off LED

        	_delay_ms(DOT_CHAR_DELAY); // Delay between a "." and a ","

		   digitalWrite(LED_GREEN, HIGH); // Turn on LED
    		_delay_ms(COMMA_DELAY); // Delay (ms) for "."
    		digitalWrite(LED_GREEN, LOW); // Turn off LED
        _delay_ms(CHAR_DELAY 600); // Delay between two chars
    }

    // Will never reach this
    return 0;
}
```


2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure]()
