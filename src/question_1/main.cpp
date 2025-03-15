
#include <iostream>
#include <vector>
#include <limits>
#include "prime_utils.h"

int main() {
    int num;
    bool continueProgram = true;

    while (continueProgram) {
        // Prompt user for a number
        std::cout << "Enter a number between 1 and 60: ";
        std::cin >> num;

        // Validate input
        while (std::cin.fail() || num < 1 || num > 60) {
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Invalid input. Please enter a number between 1 and 60: ";
            std::cin >> num;
        }

        // Call the get_primes function and store the result in a vector
        std::vector<int> primes = get_primes(num);

        // Display the prime number list
        std::cout << "Prime numbers up to " << num << " are: ";
        for (int prime : primes) {
            std::cout << prime << " ";
        }
        std::cout << std::endl;

        // Ask if the user wants to continue
        char choice;
        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> choice;

        if (choice == 'n' || choice == 'N') {
            continueProgram = false;  // Exit the loop if the user doesn't want to continue
        }
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}
