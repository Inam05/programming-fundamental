#include<iostream>
using namespace std;
int main (){
    int a= 6;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;
    cout << &a << endl;
    cout << &p << endl;
    *p = *p -6;
    cout << a << endl;
    cout << *p << endl;
    cout << &a << endl;
    cout << &p << endl;
}