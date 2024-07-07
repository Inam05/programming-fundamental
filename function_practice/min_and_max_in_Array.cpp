#include <iostream>
using namespace std;

void min_max(const int *arr, int size, int *minValue, int *maxValue);

int main()
{
    int a[] = {23, 5, 87, 42, 10, 55, 74};

    int arraySize = sizeof(a) / sizeof(a[0]);

    int minimum, maximum;

    min_max(a, arraySize, &minimum, &maximum);

    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;

    return 0;
}

void min_max(const int *arr, int size, int *minValue, int *maxValue)
{
    *minValue = *maxValue = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < *minValue)
        {
            *minValue = arr[i];
        }
        else if (arr[i] > *maxValue)
        {
            *maxValue = arr[i];
        }
    }
}
