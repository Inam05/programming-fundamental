#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "ENTER THE AMOUNT:";
    cin >> a;
    cout << "Numbers of 500 Notes are:" << a / 500;
    int r;
    r = a / 500;
    cout << "Numbers of 100 Notes are :" << r / 100;
    r = r / 100;
    cout << "Number odf 50 Notes are:" << r / 50;
    r = r / 50;
}