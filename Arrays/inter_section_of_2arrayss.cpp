#include <iostream>
using namespace std;
int main()
{
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    int arr1[size1];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int arr2[size2];
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    // Bubble Sort for the first array
    for (int i = 0; i < size1 - 1; i++)
    {
        for (int j = 0; j < size1 - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    // Bubble Sort for the second array
    for (int i = 0; i < size2 - 1; i++)
    {
        for (int j = 0; j < size2 - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    int intersectionArray[min(size1, size2)]; // Maximum possible size of intersection

    // Find the intersection of the two arrays
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            // Elements are equal, include in the intersection
            intersectionArray[k++] = arr1[i++];
            j++;
        }
    }

    // Print the intersection of the two arrays
    cout << "Intersection of the two arrays: ";
    for (int x = 0; x < k; x++)
    {
        cout << intersectionArray[x] << " ";
    }
    cout << endl;

    return 0;
}