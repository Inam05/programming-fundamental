/*Enter the age and then output tell you that you are a Teenager OR Adult OR Underteen*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age :";
    cin >> age;
    if (age >= 13 && age < 20)
    {
        cout << "Teenager";
    }
    else
    {
        if (age < 13)
        {
            cout << "Under Teen";
        }
        else
        {
            cout << "Adult";
        }
    }
}