#include <iostream>
#include <vector>
using namespace std;
void findLeaders(const vector<int> & A)
{
    int n = A.size();
    if (n == 0)
    {
        cout << "Array is empty." << endl;
        return;
    }
    int leader = A[n - 1];
    cout << "Leaders in the array: " << leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] > leader)
        {
            leader = A[i];
            cout << leader << " ";
        }
    }
    cout << endl;
}
int main()
{
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    vector<int> A(x);
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout << "The original array is : ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ";
    cout << endl;
    findLeaders(A);
    return 0;
}