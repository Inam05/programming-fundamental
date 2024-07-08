/*
Develop a program that takes an age input from the user. If the age is 18 or above,
the program should print "Eligible to vote". Otherwise, it should print "Not eligible to vote".
 Use an if-else statement to accomplish this.
*/
#include <iostream>
using namespace std;
int main()
{
    int age, b;
    cin >> age;
    for (int i = 1; i <= 10; i++)
    {
        b = age * i;
        cout << b << " ";
    }
}