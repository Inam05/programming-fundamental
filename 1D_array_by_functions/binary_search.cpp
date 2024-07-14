#include <iostream>
using namespace std;

void bubble_sort(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int binary_search(int A[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; // Key not found
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

    bubble_sort(A, x);

    cout << "Sorted Array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    int index = binary_search(A, x, key);

    if (index == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Your element is found at the index: " << index << endl;
    }
    return 0;
}