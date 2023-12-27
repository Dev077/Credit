# Credit Card Validator

This program validates credit card numbers using Luhn's Algorithm. The program prompts the user to input a credit card number and then determines whether it's a valid AMEX, VISA, MasterCard, or an invalid card number.

## Usage

To use the program, follow these steps:

1. Compile the code using a C compiler.
2. Run the compiled executable.
3. Enter the credit card number when prompted.
4. The program will output whether the credit card number is valid or not, along with its type.

## Functions

### `countDigits()`
- Counts the number of digits in the entered credit card number.

### `firstTwo()`
- Retrieves the first two digits of the entered credit card number.

### `firstOne()`
- Retrieves the first digit of the entered credit card number.

### `cValidity()`
- Implements Luhn's Algorithm for credit card number validation.

## Structure

- `main()` function: Controls the flow of the program, takes user input, and validates the credit card number.
- Helper functions: `countDigits()`, `firstTwo()`, `firstOne()`, `cValidity()` perform specific tasks required for credit card validation.

## Notes

- The program doesn't require external libraries and uses standard input/output functions from `stdio.h`.
- Error handling for invalid inputs is limited to non-numeric inputs.
