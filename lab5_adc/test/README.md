# Lab 5: JESUS SANTOS

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0 voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 100  | 63 |
   | Down   | 1.203&nbsp;V | 246 | 257 | 101 |
   | Left   | 1.96&nbsp;V  | 401 | 410 | 199 |
   | Select | 3.18&nbsp;V | 650 | 640 | 280 |
   | none   | 5&nbsp;V | 1023 | 1023 | 3ff |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components, their values and pin names!

 ![22](https://user-images.githubusercontent.com/63504192/199149258-adf5e7b6-90f3-4fc8-96fd-36d71a6302f0.jpeg)



3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of individual algorithm steps.

   ![11](https://user-images.githubusercontent.com/63504192/199148917-3cdcaa6a-df0c-4fec-82b5-5f882ec9626f.jpeg)

