#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int f=1;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            f=i;
        }
    }
    cout<<f;
}