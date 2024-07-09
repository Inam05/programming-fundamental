#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int(*ptr)[5] = &arr;

    cout << "Value at ptr[0]: " << (*ptr)[0] << endl;
    return 0;
}