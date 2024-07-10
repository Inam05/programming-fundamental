#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    int n1, n2;
    cout << "Input the first number: ";
    cin >> n1;
    cout << "Input the second number: ";
    cin >> n2;

    int result = gcd(n1, n2);

    cout << "The GCD of " << n1 << " and " << n2 << " is: " << result << endl;

    return 0;
}