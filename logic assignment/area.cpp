/* Write pseudocode to calculate the area of a shape(triangle, rectangle, or circle) based on user input and use multiple if - else statements to handle different shapes.*/

#include <iostream>
using namespace std;
int main()
{
    char shape;
    cout << "Enter the shape (t for triangle, r for rectangle, c for circle): ";
    cin >> shape;

    if (shape == 't' || shape == 'T')
    {
        // Calculate the area of a triangle
        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
    }
    else if (shape == 'r' || shape == 'R')
    {
        // Calculate the area of a rectangle
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        double area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
    }
    else if (shape == 'c' || shape == 'C')
    {
        // Calculate the area of a circle
        double radius;
        float pi = 3.14;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        double area = pi * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
    else
    {
        cout << "Invalid shape entered. Please enter t, r, or c." << endl;
    }

    return 0;
}

/*PSEUDO CODE OF THE ABOVE CODE

Begin
        Write "Enter the shape (t for triangle, r for rectangle, c for circle):"
        Read shape
    If shape is 't' || 'T'                          Then
        Write "Enter the base of the triangle:"
        Read base.
        Write "Enter the height of the triangle:"
        Read height.
        set area to 0.5 *base *height
        Write "The area of the triangle is: "
        Write area
    Else If shape is 'r' || 'R'                    then
        Write "Enter the length of the rectangle:"
        Read length
        Write "Enter the width of the rectangle:"
        Read width
        set area to length * width
        Write "The area of the rectangle is: "
        Write area
    Else If shape is 'c' || 'C'                     then
        Write "Enter the radius of the circle:"
        Read radius
        set pi to 3.14
        set area to pi * radius ^ 2
        Write "The area of the circle is: "
        Write area.
    Else
        Write "Invalid shape entered. Please enter t, r, or c."
    End If
End

*/