/*Given a point (x, y), write a program to find
out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd
Quadrant, 4th Quadrant, on the x-axis, y-axis or at
the origin, viz. (0, 0). 
*/

#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the X-coordinator value :";
    cin>>x;
    float y;
    cout<<"Enter the Y-coordinator value :";
    cin>>y;
    if(x>0 and y>0){
        cout<<"Both are lie in the 1st Quadrant";
    }
    else if(x<0 and y>0){
        cout<<"Both lie in the 2nd Quadrant";
    }
    else if(x<0 and y<0){
        cout<<"Both lie in the 3rd Quadrant";
    }
    else if(x>0 and y<0){
        cout<<"Both lie in the 4th Quadrant";
    }
    else if(x>0 or x<0){
        cout<<"Point lies on the X-axis";
    }
    else if(y>0 or y<0){
        cout<<"Point lies on the Y-axis";
    }
    else
        cout<<"At the Origin";
}