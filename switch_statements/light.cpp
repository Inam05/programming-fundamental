#include<iostream>
using namespace std;
int main(){
    int command;
    cout<<"Enter Your Command Number:";
    cin>>command;
    switch (command)
    {
    case 0:
    cout<<"Off the Light";
        break;
    case 1:
    cout<<"Om the Light";
        break;
    default:
    cout<<"Choose the Valid Command";
        break;
    }
}