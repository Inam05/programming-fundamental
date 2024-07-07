#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++) 
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout<<"The original array is : ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ";
    cout<<endl;
    cout<<"Leaders are : ";
    for (int i = 0; i < x; i++)
    {
        int j;
        for (j = i + 1; j < x; j++)
        {
            if (A[i]<=A[j])
            {
                break;
            }
        }
        if (j==x)
        {
            cout<<A[i]<<" ";
        }
    }
    return 0;
}