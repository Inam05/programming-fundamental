#include <iostream>
using namespace std;

int findMax(int nums[], int start, int end)
{
    if (start == end)
        return nums[start];

    int mid = (start + end) / 2;
    int max1 = findMax(nums, start, mid);
    int max2 = findMax(nums, mid + 1, end);

    return (max1 > max2) ? max1 : max2;
}

int findMin(int nums[], int start, int end)
{
    if (start == end)
        return nums[start];

    int mid = (start + end) / 2;
    int min1 = findMin(nums, start, mid);
    int min2 = findMin(nums, mid + 1, end);

    return (min1 < min2) ? min1 : min2;
}

int main()
{
    int nums[] = {9, 2, 4, 0, 2, 2, 3, 4, 5, 7};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Array elements: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << nums[i] << ' ';
    }

    int max = findMax(nums, 0, size - 1);
    int min = findMin(nums, 0, size - 1);

    cout << "\nMaximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}