#include "ComplexNumber.hpp"

namespace ComplexLibrary
{

ostream& operator <<(ostream& os, const ComplexNumber& c)
{
    os << c.real;
    if (c.imag < 0)
    {
        os << c.imag << 'i';
    } else
    {
        os << '+' << c.imag << 'i';
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    return ComplexNumber(c1.real + c2.real, c1.imag + c2.imag);
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    return c1.real == c2.real && c1.imag == c2.imag;
}

}
