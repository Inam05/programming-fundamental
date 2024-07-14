#include <iostream>
using namespace std;

int second_smallest(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    return A[1];
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

    int secondSmallest = second_smallest(A, x);

    cout << "Second Smallest Number in Array is: " << secondSmallest << endl;

    return 0;
}
