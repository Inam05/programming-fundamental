#include <iostream>
using namespace std;
int main()
{
    int n;
    // Input the number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> n;
    // Outer loop for each row
    for (int i = 1; i <= n; ++i)
    {
        // Inner loop for leading spaces
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        // Inner loop for ascending numbers
        int num = i;
        for (int k = 1; k <= i; ++k)
        {
            cout << num;
            ++num;
        }
        // Inner loop for descending numbers
        num -= 2;
        for (int l = 1; l <= i - 1; ++l)
        {
            cout << num;
            --num;
        }
        // Move to the next line after completing each row 
        cout << endl;
    }
    return 0;
}