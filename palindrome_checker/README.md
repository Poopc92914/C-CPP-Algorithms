# Palindrome Checker

## Description
This program checks whether a given positive integer is a palindrome. A palindrome is a number that reads the same forward and backward. The program continuously prompts the user for input until they enter `0` to exit.

## Features
- Accepts positive integers as input
- Validates input to ensure it is a valid number
- Checks if the number is a palindrome
- Provides clear error messages for invalid input
- Allows the user to exit the program by entering `0`

## How It Works
1. The program prompts the user to enter a positive integer.
2. If the user enters an invalid input (e.g., letters, negative numbers), an error message is displayed, and they are asked to enter a valid number.
3. If the input is `0`, the program exits.
4. If a valid number is entered, the program checks whether it is a palindrome and displays the result.

## Compilation & Execution
To compile and run the program, use the following commands in a terminal:

```sh
gcc palindrome_check.c -o palindrome_check
./palindrome_check
```

## Example Usage
```
Enter a positive integer (0 to exit): 121
121 is a palindrome.

Enter a positive integer (0 to exit): 123
123 is not a palindrome.

Enter a positive integer (0 to exit): 0
Closing the program. Goodbye!
```

## Functions
### `int get_valid_input()`
- Prompts the user for a positive integer.
- Ensures the input is valid and free from extra characters.
- Returns a valid integer.

### `int is_palindrome(int input)`
- Checks if the given integer is a palindrome.
- Returns `1` if the number is a palindrome, `0` otherwise.

## License
This project is released under the MIT License.
