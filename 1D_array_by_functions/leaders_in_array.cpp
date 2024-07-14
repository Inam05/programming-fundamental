#include <iostream>
using namespace std;

void leaders(const int A[], int size)
{
    cout << "Leaders are: ";
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (A[i] <= A[j])
            {
                break;
            }
        }
        if (j == size)
        {
            cout << A[i] << " ";
        }
    }
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

    cout << "The original array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    leaders(A, x);

    return 0;
}
