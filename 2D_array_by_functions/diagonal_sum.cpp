#include <iostream>
using namespace std;

const int maxSize = 10;

void input_matrix(int matrix[][maxSize], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "\nEnter a[" << i << "][" << j << "] Element :: ";
            cin >> matrix[i][j];
        }
    }
}

void print_matrix(const int matrix[][maxSize], int size)
{
    cout << "\nThe given matrix is :: \n\n";
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << "\t" << matrix[i][j];
        }
        cout << "\n\n";
    }
}

int sum_of_diagonals(const int matrix[][maxSize], int size, int &d1sum, int &d2sum)
{
    d1sum = 0;
    d2sum = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == j)
            {
                d1sum += matrix[i][j];
            }
            if (i + j == (size - 1))
            {
                d2sum += matrix[i][j];
            }
        }
    }

    return 0;
}

int main()
{
    int a[maxSize][maxSize], d1sum = 0, d2sum = 0, size;

    cout << "Enter size of matrix :: ";
    cin >> size;

    input_matrix(a, size);
    print_matrix(a, size);
    sum_of_diagonals(a, size, d1sum, d2sum);

    cout << "\nSum of 1st diagonal is :: " << d1sum;
    cout << "\n\nSum of 2nd diagonal is :: " << d2sum;

    return 0;
}
