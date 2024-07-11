#include <iostream>
using namespace std;

int main()
{
    int size ;
    cout<<"Enter the size : ";
    cin>> size;

    for (int i = 0; i < 2 * size; i++)
    {
        int spaces = abs(size - 1 - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * size - 1 - 2 * spaces;k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
