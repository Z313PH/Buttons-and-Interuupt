# Continuous LED Light Show Controller



## Overview

This project involves controlling a light show comprising six LEDs that continuously run through patterns. A function is implemented to manage this light show, triggered by a button with a pull-down resistor. Once activated, the function runs continuously until instructed to stop. A second button, connected to a pull-up resistor, triggers a hardware interrupt to halt the light show function.

## Functionality

- Controls a light show consisting of six LEDs running through various patterns.
- Activation of the light show function is initiated by pressing a button with a pull-down resistor.
- Deactivation of the light show function is achieved by pressing a button with a pull-up resistor, triggering a hardware interrupt.

## Implementation

Pressing the activation button triggers the light show function, causing the LEDs to run through their patterns continuously. Pressing the deactivation button halts the function via a hardware interrupt, stopping the light show.

## Components Used

- Six LEDs
- Activation button with pull-down resistor
- Deactivation button with pull-up resistor
- Microcontroller (e.g., Arduino)

## Circuit Diagram

<img width="500" alt="Project_4 Diagram" src="https://github.com/Z313PH/Buttons-and-Interuupt/assets/119972119/0835c4b3-4d97-4678-9cb4-37a8b0abfbaa">


## Setup Instructions

1. Connect six LEDs and appropriate resistors to the microcontroller.
2. Connect the activation button with a pull-down resistor to trigger the light show function.
3. Connect the deactivation button with a pull-up resistor to halt the light show function.
4. Upload the Arduino code provided in the repository to the microcontroller.

## Repository Contents

- **Arduino Code**: Contains the code necessary to control the LED light show function.
- **Project Image**: Illustration or image depicting the setup of the project.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- This project was developed to explore continuous LED light show control with button-triggered activation and interruption.

Feel free to contribute, report issues, or suggest improvements! Enjoy the light show! 💡🎉
