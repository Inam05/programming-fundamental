#include <iostream>
using namespace std;
int main()
{
    int n, m, l = 0;
    const int maxSize = 20;
    int array[maxSize], array1[maxSize], array2[maxSize * 2];

    cout << "Please enter the size of the first array: ";
    cin >> n;

    cout << "Please enter the values of the first array in ascending order: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    cout << "Please enter the size of the second array: ";
    cin >> m;

    cout << "Please enter the values of the second array in ascending order: " << endl;
    for (int i = 0; i < m; ++i)
    {
        cin >> array1[i];
    }

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (array[i] < array1[j])
        {
            array2[l] = array[i];
            i++;
        }
        else if (array[i] > array1[j])
        {
            array2[l] = array1[j];
            j++;
        }
        else
        {
            array2[l] = array[i];
            i++;
            j++;
        }
        l++;
    }

    while (i < n)
    {
        array2[l] = array[i];
        i++;
        l++;
    }

    while (j < m)
    {
        array2[l] = array1[j];
        j++;
        l++;
    }

    cout << endl
         << "The union of two arrays is: " << endl;
    for (int k = 0; k < l; ++k)
    {
        cout << array2[k] << " ";
    }

    return 0;
}