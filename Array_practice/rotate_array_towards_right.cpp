#include <iostream>
#include <algorithm>
using namespace std;
void rotate_right(int A[], int x, int k) //here is k 
{
    rotate(A, A + x - k, A + x);    //for left rotate(A,A+x,A+x)
}
int main()
{
    int x;
    int k;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout << "Enter the number of positions to rotate to the right: ";
    cin >> k;
    k = k % x;
    rotate_right(A, x, k);
    cout << "Array after rotating to the right by " << k << " positions: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}