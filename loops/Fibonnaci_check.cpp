#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER A NUMBER:";
    cin >> n;
    int a = 0, b = 1, next = 0;
    if (n == a || n == b)
    {
        cout << "FIBONACCI NUMBER.";
    }
    else
    {
        while (next < n)
        {
            a = b;
            b = next;
            next = a + b;
        }
        if (next == n)
        {
            cout << "FIBONACCI NUMBER.";
        }
        else
        {
            cout << "NOT FIBONACCI NUMBER.";
        }
    }
    return 0;
}