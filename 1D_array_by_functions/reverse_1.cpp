#include <iostream>
using namespace std;

void reverse_array(int A[], int size)
{
    cout << "Reversed Array: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << A[i];
        if (i > 0)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int x;
    cout << "Enter the size of an Array: ";
    cin >> x;
    cout << "_________________________________________" << endl;

    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    reverse_array(A, x);

    return 0;
}
