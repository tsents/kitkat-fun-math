#pragma once

#include <ostream>

class Complex {
public:
    Complex();
    Complex(double real, double imaginary);

    friend std::ostream& operator<<(std::ostream& os, const Complex& obj);

    friend bool operator==(const Complex& lhs, const Complex& rhs);

    friend Complex operator+(const Complex& lhs, const Complex& rhs);
    friend Complex operator-(const Complex& lhs, const Complex& rhs);
    friend Complex operator*(const Complex& lhs, const Complex& rhs);

    double getReal() const;
    double getImaginary() const;

private:
    double m_real;      // Real part of the complex number
    double m_imaginary; // Imagenery part of the complex number
};
