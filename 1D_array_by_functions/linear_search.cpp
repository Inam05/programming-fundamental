#include <iostream>
using namespace std;

int search(const int A[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == A[i])
        {
            return i; // Return the index if the number is found
        }
    }
    return -1; // Return -1 if the number is not found
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

    int target;
    cout << "Enter the number to find: ";
    cin >> target;

    int index = search(A, x, target);

    if (index != -1)
    {
        cout << "Your Number is at the index: " << index << endl;
    }
    else
    {
        cout << "Your number is not found" << endl;
    }

    return 0;
}
