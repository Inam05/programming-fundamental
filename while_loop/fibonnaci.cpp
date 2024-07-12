#include <iostream>
using namespace std;
int main() {
    int limit;
    cout << "Enter the limit for the Fibonacci sequence: ";
    cin >> limit;
    int b = 1, nextTerm = 0;
    cout << "Fibonacci Sequence up to " << limit << ": ";
    int a =0 ;
    while (a <= limit)
    {
        cout << a << " ";
        a = b;
        nextTerm = a + b;
        b = nextTerm;
    }
    cout << endl;
}