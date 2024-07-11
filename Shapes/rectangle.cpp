#include <iostream>
using namespace std;
int main()
{
    int length=7;
    int width=4; 
    for (int i = 1; i<=width; i++)
    {
        for (int j = 1; j <=length; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}