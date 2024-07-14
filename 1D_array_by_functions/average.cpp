#include <iostream>
using namespace std;

float  avg(const int A[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum / size;
}

int main()
{
    int x;
    cout << "Enter the number of elements in an Array: ";
    cin >> x;
    cout << "-----------------------------------------------" << endl;

    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    float average = avg(A, x);

    cout << endl;
    cout << "Average of the " << x << " elements of an Array A is: " << average << endl;

    return 0;
}
