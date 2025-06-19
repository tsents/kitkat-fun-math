#pragma once

#include <ostream>

/**
 * This Class implements the Complex numbers using representation
 * of x+yi. It implements printing with <<, and the operator ==,+,-,*.
 */
class Complex {
public:
    Complex();
    Complex(double real, double imaginary);

    /**
     * Overload the << operator, to print << "x + yi".
     */
    friend std::ostream& operator<<(std::ostream& os, const Complex& obj);

    /**
     * Overloads the operator == to give true if both real and imaginary parts are equal.
     */
    friend bool operator==(const Complex& lhs, const Complex& rhs);

    /**
     * Overloads the arithmetic operators. Both + and - are as expected.
     * The * operator calculates (ac - bd) + (ad + bc)i.
     */
    friend Complex operator+(const Complex& lhs, const Complex& rhs);
    friend Complex operator-(const Complex& lhs, const Complex& rhs);
    friend Complex operator*(const Complex& lhs, const Complex& rhs);

    /**
     * Simple getters for the real and imaginary parts.
     */
    double getReal() const;
    double getImaginary() const;

    /**
     * Simple setters for the real and imaginary parts.
     */
    void setReal(double real);
    void setImaginary(double imaginary);

private:
    double m_real;      // Real part of the complex number
    double m_imaginary; // Imagenery part of the complex number
};
