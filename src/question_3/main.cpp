
#include <iostream>
#include <cassert>
#include "parameters_demo.h"

int main() {
    int value = 10;    // Initial value for the value parameter
    int reference = 20; // Initial value for the reference parameter

    // Call the function with value and reference parameters
    show_value_and_reference_parameters(value, reference);

    // Test case assertions
    // REQUIRE: value should remain the same because it's passed by value
    REQUIRE(value == 10);

    // REQUIRE: reference should be changed because it's passed by reference
    REQUIRE(reference == 30);

    std::cout << "Test passed. The value parameter is " << value << " and the reference parameter is " << reference << std::endl;

    return 0;
}
