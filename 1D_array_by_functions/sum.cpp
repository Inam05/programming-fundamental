#include <iostream>
using namespace std;

int sum_elements(const int A[], int x)
{
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += A[i];
    }
    return sum;
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

    int sum = sum_elements(A, x);

    cout << "Sum of the elements of the above array is: " << sum << endl;

    return 0;
}
