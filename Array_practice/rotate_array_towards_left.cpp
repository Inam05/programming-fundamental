#include <iostream>
#include <algorithm>
using namespace std;
void rotate_left(int A[], int x, int k)
{
    rotate(A, A + k, A + x);
}
int main()
{
    int x, k;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout << "Enter the number of positions to rotate to the left: ";
    cin >> k;
    k = k % x;
    rotate_left(A, x, k);
    cout << "Array after rotating to the left by " << k << " positions: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}