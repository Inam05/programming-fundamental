#include <iostream>
using namespace std;

void square(int *num)
{
    *num = (*num) * (*num);
}
int main()
{
    int x = 4;
    square(&x);

    cout << "Square of x: " << x << endl;
    return 0;
}