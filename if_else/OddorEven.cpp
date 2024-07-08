/*Iput the number and tell me that it is odd or even*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a%2==0){
        cout<<"Even Number";
    }
    else {
        cout<<"Odd Number";
    }
}