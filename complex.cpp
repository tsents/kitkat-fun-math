#include "complex.h"
#include <string>
#include <iostream>
#include <cstring>

Complex::Complex() : Complex(0, 0) {};

Complex::Complex(double real, double imaginary) : m_real(real), m_imaginary(imaginary) {};

Complex::operator const char*() const {
    std::string base_string = "";
    base_string.append(std::to_string(m_real));
    base_string.append(" + i");
    base_string.append(std::to_string(m_imaginary));
    std::cout << base_string << std::endl;
    const char* cstring = base_string.c_str(); // This is in the stack. we need to store in the heap?
    char* heapString = new char[std::strlen(cstring) + 1];
    std::strcpy(heapString, cstring);
    return heapString;
}
