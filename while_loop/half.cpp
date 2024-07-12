#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a;
    int i=a/2;
    while(i<=1)
        i--;
    if(a%i==0){
        cout<<i<<" ";
    }
}