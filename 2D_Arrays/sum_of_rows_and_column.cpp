#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int a[size][size];
    int row, col, sum;
    cout << "Please Enter elements in array of size " << size << "x" << size << endl<< endl;
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            cin >> a[row][col];
        }
    }
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    for (row = 0; row < size; row++)
    {
        sum = 0;
        for (col = 0; col < size; col++)
        {
            sum = sum + a[row][col];
        }
        cout << "Sum of elements of Row: " << row + 1 << " is " << sum << endl;
    }
    for (col = 0; col < size; col++)
    {
        sum = 0;
        for (row = 0; row < size; row++)
        {
            sum += a[row][col];
        }
        cout << "Sum of elements of Column: " << row + 1 << " is " << sum << endl;
    }
}