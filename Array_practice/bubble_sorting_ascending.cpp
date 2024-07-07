#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the size and elements of an Array :";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number :";
        cin >> A[i];
    }
    for (int i = x - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ";
    return 0;
}