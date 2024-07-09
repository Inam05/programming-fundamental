#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i += 3)
    {
        int term;

        if (i % 2 == 0)
        {
            term = -i;
        }
        else
        {
            term = i;
        }

        cout << term;

        if (i < 100)
        {
            cout << ",";
        }
    }
    cout<<endl;
}