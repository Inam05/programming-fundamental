#include <iostream>
using namespace std;
int main()
{
    int x1;
    cout << "Enter the size of the first Array: ";
    cin >> x1;
    cout << "_________________________________________" << endl;
    int A[x1];
    for (int i = 0; i < x1; i++)       // for Array A
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    for (int i = 0; i < x1 - 1; i++)         // bubble sorting of Array A
    {
        for (int j = 0; j < x1 - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    int x2;
    cout << "Enter the size of the second Array: ";
    cin >> x2;
    cout << "_________________________________________" << endl;
    int B[x2];
    for (int i = 0; i < x2; i++)         // for Array B
    {
        cout << "Enter Number : ";
        cin >> B[i];
    }
    for (int i = 0; i < x2 - 1; i++)           // bubble sorting of array B
    {
        for (int j = 0; j < x2 - i - 1; j++)
        {
            if (B[j] > B[j + 1])
            {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    int U[x1 + x2];
    for (int i = 0; i < x1; i++)      //for union of array A and B 
    {
        U[i] = A[i];
    }
    int k = x1;
    for (int i = 0; i < x2; i++)
    {
        int c = 1;
        for (int j = 0; j < x1; j++)
        {
            if (B[i] == A[j])
            {
                c = 0;
                break;
            }
        }
        if (c == 1)
        {
            U[k] = B[i];
            k++;
        }
    }
    for (int i = 0; i < k - 1; i++)       // bubble sortig of union array U
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (U[j] > U[j + 1])
            {
                int temp = U[j];
                U[j] = U[j + 1];
                U[j + 1] = temp;
            }
        }
    }
    cout << "Union of the Array A and B is : ";
    for (int i = 0; i < k; i++)
    {
        cout << U[i] << " ";
    }
    cout << endl;
    return 0;
}