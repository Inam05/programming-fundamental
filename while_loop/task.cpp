#include <iostream>
using namespace std;

// Function to print the Pascal's Triangle
void print_pascal(int row_num)
{

    // Loop to print each row
    for (int row = 1; row <= row_num; row++)
    {

        // Loop to print spaces for triangular display
        for (int r = 1; r < row_num - row + 1; r++)
            cout << "  ";

        // Loop to print values using the Combinations formula
        int val = 1;
        for (int r = 1; r <= row; r++)
        {
            cout << val << "   ";

            val = val * (row - r) / r;
        }
        cout << endl;
    }
}

int main()
{

    int row_num = 8;
    print_pascal(row_num);

    return 1;
}