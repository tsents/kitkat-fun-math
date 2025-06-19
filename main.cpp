#include "complex.h"
#include <iostream>

int main() {
    Complex z1 = Complex(1, 2);
    Complex z2 = Complex(3, 4);

    std::cout << (z1 + z2) << std::endl;                   // Works
    std::cout << (z1 - z2) << std::endl;                   // Works
    std::cout << (z1 * z2) << std::endl;                   // Works
    std::cout << (Complex(1, 2) * Complex()) << std::endl; // Should be 0, 0
    return 0;
}
