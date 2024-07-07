#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size of the Chessboard (n X n) : ";
    cin>>num;
    for (int i = 0; i <num/2; i++)
    {
        for ( int j=1; j <= num/2; j++)
        {
            cout << "O" << " " << "X" << " ";
        }
        cout<<endl;
        for (int k=1;k<=num/2;k++ )
        {
            cout << "X" << " " << "O" << " ";
        }
        cout<<endl;
    }
    return 0;
}