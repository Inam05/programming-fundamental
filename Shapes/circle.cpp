#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int radius;
    cout<<"Enter the radius of the circle :";
    cin>>radius;
    for (int i = 0; i <= 2 * radius; i++)
    {
        for (int j = 0; j <= 2 * radius; j++)
        {
            if (pow(i - radius, 2) + pow(j - radius, 2) <= pow(radius, 2))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}