#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexLibrary;

int main()
{
    ComplexNumber c1(1, 2);
    ComplexNumber c2(3, -4);
    ComplexNumber sum = c1 + c2;

    cout << "Complex number c1: " << c1 << endl;
    cout << "Complex number c2: " << c2 << endl;
    cout << "Sum of c1 and c2: " << sum << endl;

    if (c1 == c2)
    {
        cout << "c1 and c2 are equal." << endl;
    } else
    {
        cout << "c1 and c2 are not equal." << endl;
    }

    ComplexNumber c1Conjugate = c1.conjugate();
    cout << "Conjugate of c1: " << c1Conjugate << endl;

    return 0;
}
