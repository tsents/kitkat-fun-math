#pragma once

class Complex {
public:
    Complex();
    Complex(double real, double imaginary);

    operator const char*() const; //To allow custom printing.
private:
    double m_real; // Real part of the complex number
    double m_imaginary; // Imagenery part of the complex number
};
