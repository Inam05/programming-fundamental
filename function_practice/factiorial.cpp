#include<iostream>
using namespace std;
int factorial()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
}
int main()
{
    factorial();
    return 0;
}
