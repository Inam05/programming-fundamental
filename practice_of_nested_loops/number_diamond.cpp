#include <iostream>
using namespace std;
int main()
{
    int num;
    int a;
    cout << "Enter the star shape numbers : ";
    cin >> num;
    if (num % 2 == 0)
    {
        a = num + 1;
    }
    else
    {
        a = num;
    }
    // for upper part
    // loop for rows
    int rows, spac, col;
    for (rows = 1; rows <= a; rows++)
    {
        // loop for space
        for (spac = 1; spac <= a - rows; spac++)
        {
            cout << " ";
        }
        // loops for number printing
        for (col = 1; col <= 2 * rows - 1; col++)
        {
            cout << rows;
        }
        cout << endl;
    }
    // for lower part
    // loop for rows
    for (rows = a; rows >= 1; rows--)
    {
        // loop for space
        for (spac = 1; spac <= a - rows; spac++)
        {
            cout << " ";
        }
        // loop for printing number
        for (col = 1; col <= 2 * rows - 1; col++)
        {
            cout << rows;
        }
        cout << endl;
    }
}