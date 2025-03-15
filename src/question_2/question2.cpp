#include "gcd_utils.h"

// Function to find the greatest common denominator (GCD) of two numbers using loops
int find_gcd(int num1, int num2) {
    // The GCD cannot be greater than the smaller of the two numbers
    int gcd = -1;
    
    // Loop through all numbers from 1 to the smaller of num1 or num2
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;  // Store the common divisor
        }
    }

    return gcd;
}
