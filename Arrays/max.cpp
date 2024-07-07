#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your Number : ";
    cin >> n;
    int A[5] = {3, 5, 7, 9, 2};
    for (int i = 0; i <= 4; i++)
    {
        if (n == A[i])
        {
            cout << "Your Number is at the index : " << i;
            return 0;
        }
    }
    cout << "Your number is not found";
}