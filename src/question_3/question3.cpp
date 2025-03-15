#include "parameters_demo.h"

// Function to demonstrate how value and reference parameters work
void show_value_and_reference_parameters(int valueParam, int& referenceParam) {
    valueParam += 5; // Changes to valueParam will not affect the original argument
    referenceParam += 10; // Changes to referenceParam will affect the original argument
}
