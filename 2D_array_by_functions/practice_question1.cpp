#include <iostream>
using namespace std;

const int maxSize = 10;

void inputMatrix(int matrix[][maxSize], int m, int n)
{
    cout << "Enter elements into matrix of size " << m << "x" << n << ":" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(const int matrix[][maxSize], int m, int n)
{
    cout << "Matrix of size " << m << "x" << n << " is:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(const int matrix[][maxSize], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void rowWiseSum(const int matrix[][maxSize], int m, int n)
{
    cout << "Row-wise sum of the matrix is:" << endl;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
}

void columnWiseSum(const int matrix[][maxSize], int m, int n)
{
    cout << "Column-wise sum of the matrix is:" << endl;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
}

void transposeMatrix(const int matrix[][maxSize], int m, int n, int transposed[][maxSize])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }
}

int main()
{
    int m, n;
    int A[maxSize][maxSize];
    int transposed[maxSize][maxSize];

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Input matrix\n";
        cout << "2. Display matrix\n";
        cout << "3. Sum of all elements\n";
        cout << "4. Row-wise sum\n";
        cout << "5. Column-wise sum\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            inputMatrix(A, m, n);
            break;
        case 2:
            displayMatrix(A, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumOfElements(A, m, n) << endl;
            break;
        case 4:
            rowWiseSum(A, m, n);
            break;
        case 5:
            columnWiseSum(A, m, n);
            break;
        case 6:
            transposeMatrix(A, m, n, transposed);
            cout << "Transpose of matrix is:" << endl;
            displayMatrix(transposed, n, m);
            break;
        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}
