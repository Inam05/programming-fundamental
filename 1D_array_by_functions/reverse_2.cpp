#include <iostream>
using namespace std;

const int x = 5;

void reverse_array(const int a[], int r[], int x)
{
    for (int i = 0; i < x; i++)
    {
        r[i] = a[x - 1 - i];
    }
}

int main()
{
    int a[x];
    int r[x];

    cout << "Enter five numbers:" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number at index " << i << ": ";
        cin >> a[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    reverse_array(a, r, x);

    cout << "Reversed array: ";
    for (int i = 0; i < x; i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

    return 0;
}
