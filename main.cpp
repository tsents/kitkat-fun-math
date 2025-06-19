#include "complex.h"
#include <iostream>

int main() {
    Complex z1 = Complex();
    Complex z2 = Complex();

    std::cout << (z1 == z2) << std::endl; // Works
    std::cout << z1 << std::endl;         // Works
    return 0;
}
