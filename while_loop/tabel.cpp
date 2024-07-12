#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int b;
    cout << "Where you stop:";
    cin >> b;
    int i = 1;
    while (i <= n * b)
    {
        i++;
        if (i % n == 0)
        {
            cout << i << " ";
        }
    }
}