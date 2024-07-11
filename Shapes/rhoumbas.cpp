#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;
    for (int i = 1; i <=size; i++)
    {
        for (int j = 1; j <=size - 1 - i;j++)
        {
            cout << " ";
        }
        for (int k = 1; k < size; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
