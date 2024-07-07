#include <iostream>
    using namespace std;

// Function to calculate Fibonacci number using recursion
int fibonacci(int n)
{
    // Base cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int num;

    cout << "Enter a non-negative integer for Fibonacci: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    }
    else
    {
        int result = fibonacci(num);
        cout << "Fibonacci number at position " << num << " is: " << result << endl;
    }

}