#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Value at index " << i << ": " << *(ptr + i) << endl;
    }
    return 0;
}