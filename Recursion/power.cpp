#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base, exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent (non-negative): ";
    cin >> exponent;

    if (exponent < 0)
    {
        cout << "Exponent should be non-negative." << endl;
    }
    else
    {
        int result = power(base, exponent);
        cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    }
    
    return 0;
}