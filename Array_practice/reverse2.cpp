#include <iostream>
using namespace std;
int main()
{
    const int x = 5;
    int a[x];
    int k[x];
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
    for (int i = 0; i < x; i++)
    {
        k[i] = a[x - 1 - i];
    }
    cout << "Reversed array: ";
    for (int i = 0; i < x; i++)
    {
        cout << k[i] << " ";
    }
    cout << endl;
    return 0;
}