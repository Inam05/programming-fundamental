#include <iostream>
using namespace std;
int main() {
    cout << "_________________________________________" << endl;
    int A[5];
    int k[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    cout<<"Orignal Array A : ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i]<<" ";
    }
    cout<<endl;
    int i , j;
    for ( i = 0, j = 4; i <= 4, j>=0; i++, j--)
    {
        k[i]=A[j];
    }
    cout<<"Reverse Array K :";
    for (int i = 0; i < 5; i++)
    {
        cout << k[i] << " ";
    }
    cout << " ";
    return 0;
}