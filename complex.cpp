#include "complex.h"
#include <string>

Complex::Complex() : Complex(0, 0){};

Complex::Complex(double real, double imaginary) : m_real(real), m_imaginary(imaginary){};

double Complex::getReal() const {
    return m_real;
}

double Complex::getImaginary() const {
    return m_imaginary;
}

bool operator==(const Complex& lhs, const Complex& rhs) {
    return (lhs.m_real == rhs.m_real) && (lhs.m_imaginary == rhs.m_imaginary);
}

Complex operator+(const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.m_real + rhs.m_real, lhs.m_imaginary + rhs.m_imaginary);
}

Complex operator-(const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.m_real - rhs.m_real, lhs.m_imaginary - rhs.m_imaginary);
}

Complex operator*(const Complex& lhs, const Complex& rhs) {
    const double real_part = (lhs.m_real * rhs.m_real) - (lhs.m_imaginary * rhs.m_imaginary);
    const double imaginary_part = (lhs.m_real * rhs.m_imaginary) + (lhs.m_imaginary * rhs.m_real);
    return Complex(real_part, imaginary_part);
}

std::ostream& operator<<(std::ostream& os, const Complex& obj) {
    return os << obj.m_real << " + " << obj.m_imaginary << "i";
}
