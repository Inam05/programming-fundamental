#include <iostream>

using namespace std;

void sum_and_average(const int *arr, int size, int &sum, double &average)
{
    sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += *arr; 
        arr++;       
    }
    average = static_cast<double>(sum) / size;
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

    int sum;
    double average;
    sum_and_average(numbers, arraySize, sum, average);

    cout << "Sum of the Array: " << sum << endl;
    cout << "Average of the Array: " << average << endl;

    return 0;
}
