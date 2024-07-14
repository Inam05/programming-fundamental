#include <iostream>
using namespace std;

const int x = 5;

void reverse_array(const int A[], int r[], int x)
{
    for (int i = 0, j = x - 1; i < x; i++, j--)
    {
        r[i] = A[j];
    }
}

int main()
{
    int A[x];
    int k[x];

    cout << "_________________________________________" << endl;

    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    cout << "Original Array A: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    reverse_array(A, k, x);

    cout << "Reversed Array K: ";
    for (int i = 0; i < x; i++)
    {
        cout << k[i] << " ";
    }
    cout << endl;

    return 0;
}
