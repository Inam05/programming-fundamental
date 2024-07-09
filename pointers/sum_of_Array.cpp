#include <iostream>

using namespace std;

int calculateSum(const int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += *arr; 
        arr++;       
    }

    return sum;
}

int main()
{
    const int arraySize = 5;
    int numbers[arraySize] = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int sum = calculateSum(numbers, arraySize);
    cout << "Sum of the Array: " << sum << endl;

    int dynamicSize;
    cout << "Enter the size for a dynamic array of doubles: ";
    cin >> dynamicSize;

    double *dynamicArray = new double[dynamicSize];

    cout << "Enter " << dynamicSize << " double values for the dynamic array:" << endl;
    for (int i = 0; i < dynamicSize; ++i)
    {
        cin >> dynamicArray[i];
    }

    cout << "Dynamic Array of Doubles: ";
    for (int i = 0; i < dynamicSize; ++i)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}
