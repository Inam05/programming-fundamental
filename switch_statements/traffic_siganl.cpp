#include <iostream>
using namespace std;
int main()
{
    char color;
    cout << "What's the color of traffic light";
    cin >> color;
    switch (color)
    {
    case 'r':
        cout << "Stop the vehicle";
        break;
    case 'y':
        cout << "Start the vehicle";
        break;
    case 'g':
        cout << "Drive the vehicle";
        break;
    default:
        cout << "Invalid choice";
        break;
    }
}