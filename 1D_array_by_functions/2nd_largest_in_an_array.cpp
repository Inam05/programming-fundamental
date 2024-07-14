#include <iostream>
using namespace std;

int second_largest(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] < A[j])
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

    int secondLargest = second_largest(A, x);

    cout << "Second Largest Number in Array is: " << secondLargest << endl;

    return 0;
}