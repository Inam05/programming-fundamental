#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number:";
    cin >> a;
    if (a % 2 == 0)
    {
        int x = 2;
        while (x <= a)
        {
            cout << x << " ";
            x = x + 2;
        }
    }
    else
    {
        int x = 1;
        while (x <= a)
        {
            cout << x << " ";
            x = x + 2;
        }
    }
}