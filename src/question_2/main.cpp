
#include <iostream>
#include <limits>
#include "gcd_utils.h"

int main() {
    int num1, num2;
    bool continueProgram = true;

    while (continueProgram) {
        // Prompt the user for two integer values
        std::cout << "Enter the first number (1-200): ";
        std::cin >> num1;
        std::cout << "Enter the second number (1-200): ";
        std::cin >> num2;

        // Validate input to ensure the numbers are in the range of 1 to 200
        while (std::cin.fail() || num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Invalid input. Please enter two numbers between 1 and 200: ";
            std::cin >> num1 >> num2;
        }

        // Call the find_gcd function and store the result
        int gcd = find_gcd(num1, num2);

        // Output the result
        if (gcd == -1) {
            std::cout << "There are no common factors between " << num1 << " and " << num2 << ".\n";
        } else {
            std::cout << "The greatest common denominator (GCD) of " << num1 << " and " << num2 << " is: " << gcd << "\n";
        }

        // Ask if the user wants to continue
        char choice;
        std::cout << "Do you want to enter another pair of numbers? (y/n): ";
        std::cin >> choice;

        if (choice == 'n' || choice == 'N') {
            continueProgram = false;  // Exit the loop if the user doesn't want to continue
        }
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}
