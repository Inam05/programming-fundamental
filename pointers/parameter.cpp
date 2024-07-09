#include <iostream>
using namespace std;

void display(int *p)
{
    *p = *p - 4;
     cout << *p;
}

int main()
{
    int b = 4;
    int *p;
    p=&b;
    display(&b);
    cout << endl;
    cout << b;
    return 0;
}