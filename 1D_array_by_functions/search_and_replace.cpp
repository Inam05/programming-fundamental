#include <iostream>
using namespace std;

void s_and_replace(int arr[], int size, int search_value, int replace_value)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == search_value)
        {
            // Replace the value if found
            arr[i] = replace_value;
        }
    }
}

int main()
{
    const int size = 6;
    int Array[size] = {5, 8, 3, 7, 3, 10};

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << Array[i] << " ";
    }
    cout << endl;

    int search_value = 3;
    int replace_value = 15;

    s_and_replace(Array, size, search_value, replace_value);

    cout << "Array after search and replace: ";
    for (int i = 0; i < size; ++i)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
    return 0;
}