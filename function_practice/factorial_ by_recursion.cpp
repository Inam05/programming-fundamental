#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}