#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> a;
    int rows,spac,col;
    for (rows = 1; rows<=a; rows++)
    {
        // loop for space
        for (spac=1;spac<=a-rows;spac++)
        {
            cout<<" ";
        }
        //loops for star printing
        for (col=1;col<=rows;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}