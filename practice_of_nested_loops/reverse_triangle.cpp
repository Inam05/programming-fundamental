#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 0; i--)
    {
        for (int a = 1; a <= i; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}