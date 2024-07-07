#include <iostream>
using namespace std;

double Triangle_Area(double base, double height)
{
    return 0.5 * base * height;
}

double Rectangle_Area(double length, double width)
{
    return length * width;
}

double Circle_Area(double radius)
{
    const double pi = 3.14;
    return pi * radius * radius;
}

int main()
{
    char shape;
    cout << "Enter the shape (t for triangle, r for rectangle, c for circle): ";
    cin >> shape;

    if (shape == 't' || shape == 'T')
    {
        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        double area = Triangle_Area(base, height);
        cout << "The area of the triangle is: " << area << endl;
    }
    else if (shape == 'r' || shape == 'R')
    {
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        double area = Rectangle_Area(length, width);
        cout << "The area of the rectangle is: " << area << endl;
    }
    else if (shape == 'c' || shape == 'C')
    {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        double area = Circle_Area(radius);
        cout << "The area of the circle is: " << area << endl;
    }
    else
    {
        cout << "Invalid shape entered. Please enter t, r, or c." << endl;
    }
    return 0;
}