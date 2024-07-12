#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Select Number:";
    cin>>num;
    switch (num)
    {
    case 1:
    cout<<"Balance Inquiry";
        break;
    case 2:
    cout<<"Withdrawal";
        break;
    case 3:
    cout<<"Deposit";
        break;
    case 4:
    cout<<"Exit";
        break;
    default:
    cout<<"Choose A Valid Number";
        break;
    }
}