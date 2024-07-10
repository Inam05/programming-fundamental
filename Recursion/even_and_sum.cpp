#include <iostream>

using namespace std;

void calculate_even_odd_Sum(int start, int end, int &evenSum, int &oddSum)
{
    if (start > end)
        return;

    if (start % 2 == 0)
        evenSum += start; // Add the current number to the even sum
    else
        oddSum += start; // Add the current number to the odd sum

    // Recursively call the function with the next number in the range
    calculate_even_odd_Sum(start + 1, end, evenSum, oddSum);
}

int main()
{
    int start, end;
    cout << "Input the starting number: ";
    cin >> start;
    cout << "Input the ending number: ";
    cin >> end;

    int even_Sum = 0;
    int odd_Sum = 0;

    calculate_even_odd_Sum(start, end, even_Sum, odd_Sum);

    cout << "Sum of even numbers: " << even_Sum << endl;
    cout << "Sum of odd numbers: " << odd_Sum << endl;

    return 0;
}