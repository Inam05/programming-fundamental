#include <iostream>
using namespace std;

void even(const int A[], int size)
{
    int even_count = 0;
    cout << "Even elements are: ";
    for (int i = 0; i < size; ++i)
    {
        if (A[i] % 2 == 0)
        {
            cout << A[i] << " ";
            even_count++;
        }
    }
    cout << endl;
    cout << "Total even elements: " << even_count << endl;
}

void odd(const int A[], int size)
{
    int odd_count = 0;
    cout << "Odd elements are: ";
    for (int i = 0; i < size; ++i)
    {
        if (A[i] % 2 != 0)
        {
            cout << A[i] << " ";
            odd_count++;
        }
    }
    cout << endl;
    cout << "Total odd elements: " << odd_count << endl;
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

    even(A, x);
    odd(A, x);

    return 0;
}