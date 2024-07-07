#include <iostream>
using namespace std;
int main()
{
    const int rows = 2;
    const int cols = 3;

    int A[rows][cols] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int t_A[cols][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            t_A[j][i] = A[i][j];
        }
    }

    cout << "Original Array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Array:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << t_A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
