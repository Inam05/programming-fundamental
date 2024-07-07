#include <iostream>
using namespace std;

void Fibonacci(int limit, int sequence[], int &size)
{
    int first = 0, second = 1, next_term;
    size = 0;

    for (int i = 0; first <= limit; i++)
    {
        sequence[size++] = first;
        next_term = first + second;
        first = second;
        second = next_term;
    }
}

int main()
{
    int limit;
    cout << "Enter the limit for Fibonacci sequence: ";
    cin >> limit;

    const int maxSize = 100; // Assuming a maximum size for the array
    int result[maxSize];
    int size;

    Fibonacci(limit, result, size);

    cout << "Fibonacci Sequence up to " << limit << ": ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
