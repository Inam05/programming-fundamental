#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    for (int i = 1; i <= x; i++)
    {
        if (A[0] > A[i])
        {
            A[0] = A[i];
        }
    }
    cout << endl << "Smallest element = " << A[0];
    return 0;
}