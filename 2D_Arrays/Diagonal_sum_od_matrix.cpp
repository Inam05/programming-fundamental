#include <iostream>
using namespace std;
int main()
{
    int a[10][10], d1sum = 0, d2sum = 0, m, i, j;
    cout << "Enter size of matrix :: ";
    cin >> m;
    cout << "\nEnter Elements to Matrix Below :: \n";

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; ++j)
        {
            cout << "\nEnter a[" << i << "][" << j << "] Element :: ";
            cin >> a[i][j];
        }
    }

    cout << "\nThe given matrix is :: \n\n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            cout << "\t" << a[i][j];
        }
        cout<<"\n\n";
    }

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            if (i == j)
            {
                d1sum += a[i][j];
            }
            if (i + j == (m - 1))
            {
                d2sum += a[i][j];
            }
        }
    }
    cout << "\nSum of 1st diagonal is :: " << d1sum;
    cout << "\n\nSum of 2nd diagonal is :: " << d2sum;

    return 0;
}
