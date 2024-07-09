#include <iostream>
#include <algorithm> //  header file for min_element and max_element

using namespace std;

void swap_value
(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    const int array_size = 5;
    int numbers[array_size] = {5, 2, 8, 1, 9};

    cout << "Original Array: ";
    for (int i = 0; i < array_size; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int *minPtr = min_element(numbers, numbers + array_size);
    int *maxPtr = max_element(numbers, numbers + array_size);

    cout << "Minimum Value: " << *minPtr << endl;
    cout << "Maximum Value: " << *maxPtr << endl;

    swap_value
    (minPtr, maxPtr);

    cout << "Array after swapping min and max values: ";
    for (int i = 0; i < array_size; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int *dynamicArray = new int[array_size];

    for (int i = 0; i < array_size; ++i)
    {
        dynamicArray[i] = i * 2;
    }

    cout << "Dynamic Array: ";
    for (int i = 0; i < array_size; ++i)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}