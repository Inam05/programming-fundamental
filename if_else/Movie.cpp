/*Create a C++ program that simulates a ticket reservation system for a cinema.
Ask the user for their age and the type of movie they want to watch (Action, Comedy, or Drama).
Implement different pricing rules:
If the age is below 12, the ticket costs $7.
If the age is between 12 and 18, the ticket costs $10.
If the age is 18 or above, the ticket costs $12.
If the movie is Comedy and the age is below 18, give a 20% discount.
If the movie is Drama and the age is 18 or above, offer a 15% discount*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    float show_price;
    string movie_type;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the type of movie (Action, Comedy, or Drama): ";
    cin >> movie_type;
    if (age < 12)
    {
        show_price = 7.0;
    }
    else if (age>=12 && age<18)
    {
        show_price = 10.0;
    }
    else
    {
        show_price = 12.0;
    }
    if (movie_type == "Comedy" && age < 18)
    {
        show_price *= 0.8; // 20% discount
    }
    else if (movie_type == "Drama" && age >= 18)
    {
        show_price *= 0.85; // 15% discount
    }
    cout<<show_price;
    return 0;
}