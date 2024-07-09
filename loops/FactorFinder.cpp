// Write a program that checks if a triangle is valid based on the lengths of its three sides.
#include <iostream>
using namespace std;
int main()
{
    float length_1;
    cout << "Enter length_1:";
    cin >> length_1;
    float length_2;
    cout << "Enter length_2:";
    cin >> length_2;
    float length_3;
    cout << "Enter length_3 :";
    cin >> length_3;
    if ((length_1 + length_2 > length_3) && (length_1 + length_3 > length_2) && (length_2 + length_3 > length_1))
    {
        cout << "A valid Triangle.";
    }
    else
    {
        cout << "Invalid Triangle.";
    }
}