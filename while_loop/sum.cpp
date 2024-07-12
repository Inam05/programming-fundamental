#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "Sum of digits of " << originalNumber << " is: " << sum << endl;
}
