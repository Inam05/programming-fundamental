#include <iostream>
using namespace std;
int main()
{
    int season;
    cout << "Enter Season Number:";
    cin >> season;
    switch (season)
    {
    case 1:
        cout << "Summer";
        break;
    case 2:
        cout << "Autumn";
        break;
    case 3:
        cout << "Winter";
        break;
    case 4:
        cout << "Spring";
        break;
    default:
        cout << "Invalid";
        break;
    }
}