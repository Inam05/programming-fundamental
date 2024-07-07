#include<iostream>
using namespace std;
int main ()
{
    int x ;
    cout<<"Enter the number of elements in an Array :";
    cin>>x;
    int A[x];
    for(int i=1; i<=x; i++)
    {
        cout<<"Enter Number :";
        cin>>A[i];
    }
    for(int i=1; i<=x; i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}