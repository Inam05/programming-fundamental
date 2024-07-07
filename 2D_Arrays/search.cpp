#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the rows of the array : ";
    cin >> x;
    int y;
    cout << "Enter the columns of the array : ";
    cin >> y;
    int A[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Enter the element : ";
            cin >> A[i][j];
            cout << endl;
        }
    }
    cout << "The array is :";
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    int a;
    cout << "What you want to find ?";
    cout << endl;
    cin >> a;
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (A[i][j] == a)
            {
                cout << "You found at row number : " << i + 1 << " and column number :" << j + 1;
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "Not Found";
    }
    cout << "Number found " << count << " times";
    return 0;
}