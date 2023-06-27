#include <iostream>
#include "Fraction2.h"

using namespace std;

int main()
{
    Fraction frac3(1, 4);
    Fraction frac4(2, 4);

    cout << frac3 << '\n';
    cout << (frac3 + frac4) << '\n';
    cout << (frac3 - frac4) << '\n';
    cout << (frac3 * frac4) << '\n';
    cout << (frac3 / frac4) << '\n';
}

