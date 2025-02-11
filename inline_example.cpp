#include "inline_example.h"

// Defining the traditional variable (needed in one source file)
int traditional_global_variable = 10;

void printValues() {
    std::cout << "Traditional global variable: " << traditional_global_variable << std::endl;
    std::cout << "Inline global variable: " << inline_global_variable << std::endl;
}
