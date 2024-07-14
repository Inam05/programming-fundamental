#include <iostream>
using namespace std;

int smallest(int A[], int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    return A[0];
}

int main()
{
    int x;
    cout << "Enter the size and elements of an Array: ";
    cin >> x;

    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    int secondSmallest = smallest(A, x);

    cout << "Second Smallest Number in Array is: " << secondSmallest << endl;

    return 0;
}
