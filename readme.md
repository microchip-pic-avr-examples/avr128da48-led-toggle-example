<img src="images/microchiptechnologyinc.png" height="60">

# AVR128DA48 LED Toggle Using a Button Example
This repository provides an Atmel Studio solution with a bare metal code example for an LED blink driven by a timer overflow interrupt.
The project showcases a basic application using an LED and a Button. The LED is turned off while the button is pressed and turned on while the button is released.

## Configurations
- PC6 - configured as digital output (the on-board user LED)
- PC7 - configured as digital input (the on-board user button SW0)

<img src="images/AVR128DA48_CNANO_instructions.PNG" height="250">

## Required Tools
- Atmel Studio 7.0.2397 or newer
- AVR-Dx 1.0.18 or newer Device Pack
- AVR128DA48 Curiosity Nano (DM164151)

## Compatibility
The source code is compatible with the following devices: AVR128DA28, AVR128DA32, AVR128DA48, and AVR128DA64.
