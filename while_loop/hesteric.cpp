#include <iostream>
using namespace std;

int main()
{
    for (int a = 1; a <= 5; a++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
