#include <iostream>
using namespace std;

int search(int arr[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        if (arr[mid] == target)
        {
            return mid;
        }

        // If the element is smaller than the middle element, search in the left subarray
        if (arr[mid] > target)
        {
            return search(arr, low, mid - 1, target);
        }

        // If the element is larger than the middle element, search in the right subarray
        return search(arr, mid + 1, high, target);
    }

    // Element is not present in the array
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; // size of the array
    int target = 6;
    int result = search(arr, 0, size - 1, target);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
