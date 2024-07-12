#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first Number:";
    cin >> a;
    char op;
    cout << "Enter the condition:";
    cin >> op;
    int b;
    cout << "Enter your second Number:";
    cin >> b;
    switch (op)
    {
    case '*':
        if (a % 2 == 0)
        {
            cout << a * b;
            break;
        }
    case '/':
        if (a % 2 == 0)
        {
            cout << a / b;
            break;
        }
    case '+':
        if (a % 2 == 0)
        {
            cout << a + b;
            break;
        }
    case '-':
        if (a % 2 == 0)
        {
            cout << a - b;
            break;
        }
    default:
        cout << "Ivalid choice";
        break;
    }
}