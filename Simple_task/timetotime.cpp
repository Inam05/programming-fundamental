#include<iostream>
using namespace std;
int main(){
    int s,h,m,r;
    cout<<"Enter Seconds:";
    cin>>s;
    cout<<"Hours are"<<s/3600<<endl;
    r=s%3600;
    cout<<"Minutes are:"<<r/60<<endl;
    r=r%60;
    cout<<"Seconds are:"<<r;
    return 0;
}