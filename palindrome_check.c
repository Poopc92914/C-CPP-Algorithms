#include <stdio.h>

int get_valid_input(); // Function to get a valid positive integer from the user
int is_palindrome(int input); // Function to check if a number is a palindrome

int main(){

    int input;

    while (1){ // Infinite loop to repeatedly check for palindrome until user exits

        input = get_valid_input(); // Get valid user input

        if (input == 0){ // Check if user wants to exit

            printf("Closing the program. Goodbye!\n");
            break; // Exit the loop and end the program

        }

        // Check if the number is a palindrome
        if (is_palindrome(input) == 1){
            printf("%d is a palindrome.\n\n", input);
        } else {
            printf("%d is not a palindrome.\n\n", input);
        }

    }

    return 0;
}

int get_valid_input(){

    int input;
    char temp;

    while (1){

        printf("Enter a positive integer (0 to exit): ");
        // Check if input is a valid integer and ensure there are no extra characters
        if (scanf("%d", &input) != 1 || (scanf("%c", &temp) == 1 && temp != '\n')) {
            
            printf("Error: Invalid Input\n\n");
            while ((temp = getchar()) != '\n' && temp != EOF); // Clear the input buffer
            continue; // Prompt user again
    
        } else if (input < 0){ // Check if the input is negative

            printf("Error: Invalid Integer\n\n");
            continue; // Prompt user again

        }

        return input; // Return the valid input

    } 

}

int is_palindrome(int input){

    int original, reverse, lastDigit;

    original = input; // Store the original number
    reverse = 0; // Initialize reverse number to 0

    // Reverse the number
    while (input != 0){
        lastDigit = input % 10; // Extract last digit
        reverse = reverse * 10 + lastDigit; // Build the reversed number
        input = input / 10; // Remove last digit
    }

    // Compare reversed number with the original
    if (reverse == original){
        return 1; // Return 1 if palindrome
    } else {
        return 0; // Return 0 if not a palindrome
    }

}