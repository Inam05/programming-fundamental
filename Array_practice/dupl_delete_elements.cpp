#include <iostream>
using namespace std;
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
    cout << "Deleted elements: ";
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (A[i] == A[j])
            {
                cout << A[j] << " ";
                for (int k = j; k < x - 1; k++)
                {
                    A[k] = A[k + 1];
                }
                x--;
                j--;
            }
        }
    }
    cout << "\nAfter deletion of repeated elements. The updated Array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}