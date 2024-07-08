/*Develop a program that estimates shipping costs based on weight and destination (domestic or international).
Implement multiple conditions for weight ranges and different rates for domestic and international destinations.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double weight, shippingCost;
    char destination;
    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;
    cout << "Enter the destination (D for domestic, I for international): ";
    cin >> destination;
    if (weight <= 0)
    {
        cout << "Invalid weight. Please enter a positive weight." << endl;
    }
    else
    {
        if (destination == 'D' || destination == 'd')
        {
            if (weight <= 1)
            {
                shippingCost = 5.0;
            }
            else if (weight <= 5)
            {
                shippingCost = 8.0;
            }
            else if (weight <= 10)
            {
                shippingCost = 12.0;
            }
            else
            {
                shippingCost = 15.0;
            }
        }
        else if (destination == 'I' || destination == 'i')
        {
            if (weight <= 1)
            {
                shippingCost = 10.0;
            }
            else if (weight <= 5)
            {
                shippingCost = 15.0;
            }
            else if (weight <= 10)
            {
                shippingCost = 20.0;
            }
            else
            {
                shippingCost = 25.0;
            }
        }
        else
        {
            cout << "Invalid destination. Please enter D for domestic or I for international." << endl;
            return 1; // Exit program with an error code
        }
        cout << fixed << setprecision(2);
        cout << "Shipping cost:" << shippingCost << endl;
    }
    return 0;
}