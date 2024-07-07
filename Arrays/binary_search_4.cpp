#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array:";
    cin >> n;
    int A[n];
    cout << "Enter the Elements of Array:  ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = n - 1; i >= 0; i--)
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
    cout << "Sorted Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int mid, key, loc, low, high;
    cout << "Enter the element you want to search: ";
    cin >> key;
    loc = -1;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            loc = mid;
            break;
        }
        else
        {
            if (key < A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (loc == -1)
    {
        cout << "Not found.";
    }
    else
    {
        cout << "Found at index " << loc;
    }
    return 0;
}