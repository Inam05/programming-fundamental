#include <iostream>
using namespace std;
int main()
{
    int rows, a, b;
    cout << "Enter the Number of rows:";
    cin >> rows;
    a = 1;
    while (a <= rows)
    {
        b = 1;
        while (b <= a)
        {
            cout << "*";
            b++;
        }
        cout << endl;
        a++;
    }
}