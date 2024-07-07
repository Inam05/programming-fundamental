#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the size of an Array: ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout << "Reversed Array: ";
    for (int i = x - 1; i >= 0; i--)
    {
        cout << A[i];
        if (i > 0)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}