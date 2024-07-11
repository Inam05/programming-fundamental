#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    bool x = true; // its mean that the number will be a prime number
    int i = 2;
    while (i <= n / 2)
    {
        i++;
        if (n % i == 0)
        {
            x = false; // its mean that the number will not a prime number or a composite number
            break;
        }
    }
    if (x == true)
    {
        cout << "It's A Prime Number";
    }
    else
    {
        cout << "It's Not A Prime Number";
    }
    return 0;
}