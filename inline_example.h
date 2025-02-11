#ifndef INLINE_EXAMPLE_H
#define INLINE_EXAMPLE_H

#include <iostream>

// Traditional approach (before C++17) using `extern`
extern int traditional_global_variable; 

// New approach in C++17 using inline variables
inline int inline_global_variable = 42;  // No need for extern & separate definition

// Function to print values
void printValues();

#endif // INLINE_EXAMPLE_H
