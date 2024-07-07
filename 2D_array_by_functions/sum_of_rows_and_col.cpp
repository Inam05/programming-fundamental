#include <iostream>
using namespace std;

const int maxSize = 5;

void inputMatrix(int matrix[][maxSize], int size)
{
    cout << "Please Enter elements in array of size " << size << "x" << size << endl
         << endl;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cin >> matrix[row][col];
        }
    }
}

void printMatrix(const int matrix[][maxSize], int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void calculateRowSums(const int matrix[][maxSize], int size)
{
    for (int row = 0; row < size; row++)
    {
        int sum = 0;
        for (int col = 0; col < size; col++)
        {
            sum += matrix[row][col];
        }
        cout << "Sum of elements of Row " << row + 1 << " is " << sum << endl;
    }
}

void calculateColumnSums(const int matrix[][maxSize], int size)
{
    for (int col = 0; col < size; col++)
    {
        int sum = 0;
        for (int row = 0; row < size; row++)
        {
            sum += matrix[row][col];
        }
        cout << "Sum of elements of Column " << col + 1 << " is " << sum << endl;
    }
}

int main()
{
    int size = 5;
    int a[maxSize][maxSize];

    inputMatrix(a, size);

    cout << "\nThe entered matrix is :: \n";
    printMatrix(a, size);

    calculateRowSums(a, size);
    calculateColumnSums(a, size);

    return 0;
}
