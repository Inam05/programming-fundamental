#include <iostream>
using namespace std;

void delete_duplicate(int A[], int &size)
{
    cout << "Deleted elements: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] == A[j])
            {
                cout << A[j] << " ";
                for (int k = j; k < size - 1; k++)
                {
                    A[k] = A[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    cout << "\nAfter deletion of repeated elements. The updated Array is: ";
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
        cout << "Enter Number : ";
        cin >> A[i];
    }

    delete_duplicate(A, x);

    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
