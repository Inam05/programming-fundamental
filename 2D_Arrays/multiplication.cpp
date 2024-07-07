#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int m_Table[size][size];

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            m_Table[i - 1][j - 1] = i * j;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << m_Table[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}