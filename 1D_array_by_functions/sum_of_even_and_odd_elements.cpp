#include <iostream>
using namespace std;

int even(const int A[], int x)
{
    int even_sum = 0;
    cout << "Even elements are: ";
    for (int i = 0; i < x; ++i)
    {
        if (A[i] % 2 == 0)
        {
            cout << A[i] << " ";
            even_sum += A[i];
        }
    }
    cout << endl;
    return even_sum;
}

int odd(const int A[], int x)
{
    int odd_sum = 0;
    cout << "Odd elements are: ";
    for (int i = 0; i < x; ++i)
    {
        if (A[i] % 2 != 0)
        {
            cout << A[i] << " ";
            odd_sum += A[i];
        }
    }
    cout << endl;
    return odd_sum;
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

    int even_sum = even(A, x);
    int odd_sum = odd(A, x);

    cout << "Total sum of even elements: " << even_sum << endl;
    cout << "Total sum of odd elements: " << odd_sum << endl;

    return 0;
}