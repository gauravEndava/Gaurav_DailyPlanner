#include "inline_example.h"

int main() {
    // Accessing both variables
    printValues();

    // Modify values
    traditional_global_variable = 20;
    inline_global_variable = 50;

    std::cout << "\nAfter modification:" << std::endl;
    printValues();

    return 0;
}
