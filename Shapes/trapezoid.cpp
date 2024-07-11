#include <iostream>
using namespace std;

int main()
{
    int height = 5; 
    int base1 = 7;  
    int base2 = 4; 

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < base1 + i; ++j)
        {
            if (j < i || j >= base1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}