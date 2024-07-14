#include <iostream>
using namespace std;

void sum(const int A[], int size)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += A[i];
        }
        else
        {
            sumOdd += A[i];
        }
    }

    cout << "Sum of elements at even indices: " << sumEven << endl;
    cout << "Sum of elements at odd indices: " << sumOdd << endl;
}

int main()
{
    int x;
    cout << "Enter the size and elements of an Array: ";
    cin >> x;
    cout << "_________________________________________" << endl;

    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    sum(A, x);

    return 0;
}
