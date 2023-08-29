# Embedded Calculator Project
This project is a simple calculator that handles arithmetic operations using a keypad, LCD, and Atmega32 microcontroller. 
It was developed as a part of my one-month training for embedded systems at ITI. The calculator is designed to handle edge cases such as divide by zero and subtracting from larger numbers, and it also supports calculations with large numbers.
## Project Overview

The embedded calculator project utilizes the following components:

- Keypad: The keypad interface allows the user to input the arithmetic expressions and commands.
- LCD: The LCD display provides a visual output for the calculator, displaying the entered expressions and the results.
- Atmega32 Microcontroller: The Atmega32 microcontroller acts as the brain of the calculator, controlling the input from the keypad, processing the arithmetic operations, and sending the output to the LCD.

The calculator is designed to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It also incorporates error handling to handle edge cases, such as division by zero and subtracting from larger numbers. Additionally, it supports calculations with large numbers, allowing users to perform operations on numbers of significant magnitude.

## Getting Started

To set up and run the embedded calculator project, follow these steps:

1. Gather the necessary hardware components, including the Atmega32 microcontroller, keypad, and LCD.
2. Set up the hardware connections between the microcontroller, keypad, and LCD. Refer to the project documentation or schematic for the specific wiring details.
3. Download and install the necessary software tools, such as an integrated development environment (IDE) and a compiler, suitable for programming the Atmega32 microcontroller.
4. Create a new project in the chosen IDE and configure it to target the Atmega32 microcontroller.
5. Write or import the C code for the calculator functionality into the project.
6. Compile the code and check for any errors or warnings.
7. Upload the compiled code onto the Atmega32 microcontroller using a suitable programming method, such as an ISP programmer.
8. Connect the microcontroller to the keypad and LCD according to the hardware setup.
9. Power on the system and test the embedded calculator.

## Usage

Once the embedded calculator is set up and running, users can utilize the keypad and LCD to perform arithmetic operations. The specific usage instructions may vary depending on the keypad layout and the implemented user interface. However, the general process typically involves the following steps:

1. Enter the numbers and arithmetic operators using the keypad.
2. Press the appropriate command key (e.g., "=") to perform the calculation.
3. The LCD will display the entered expression and the calculated result.
4. The calculator will handle edge cases, such as division by zero and subtracting from larger numbers, and provide appropriate error messages or results.
5. Users can continue entering new expressions or clear the calculator to start a fresh calculation.

## Contributing

Contributions to the embedded calculator project are welcome. You can contribute by suggesting improvements, reporting bugs, or adding new features. Please open an issue or submit a pull request on the project repository to contribute.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

I would like to express my gratitude to ITI for providing me with the opportunity to learn and work on this project during the one-month training for embedded systems. I would also like to thank the open-source community for their valuable resources and contributions that helped in the development of this project.
