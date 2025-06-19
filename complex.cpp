#include "complex.h"
#include <string>

Complex::Complex() : Complex(0, 0) {};

Complex::Complex(double real, double imaginary) : m_real(real), m_imaginary(imaginary) {};

      
double Complex::getReal() const {
    return m_real;
}

double Complex::getImaginary() const {
    return m_imaginary;
}

std::ostream& operator<<(std::ostream& os, const Complex& obj) {
    return os << obj.m_real << " + i" << obj.m_imaginary;
}
