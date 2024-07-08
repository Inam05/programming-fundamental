/*Loan Eligibility System:
Create a program that determines loan eligibility based on several factors: age, employment status (employed/unemployed),
and credit score.Use nested if statements to handle various scenarios and eligibility criteria.
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    char employment_status; // It is easy way to know that the person is employed or unemployed
    int credit_score;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your employment status (E for employed, U for unemployed): ";
    cin >> employment_status;
    cout << "Enter your credit score: ";
    cin >> credit_score;
    if (age >= 18)
    {
        if (employment_status == 'E' || employment_status == 'e')
        {
            if (credit_score >= 1000)
            {
                cout << "Congratulations! You are eligible for the loan." << endl;
            }
            else
            {
                cout << "Sorry, your credit score is too low for the loan." << endl;
            }
        }
        else if (employment_status == 'U' || employment_status == 'u')
        {
            cout << "Sorry, unemployed individuals are not eligible for the loan." << endl;
        }
        else
        {
            cout << "Invalid employment status input. Please enter 'E' for employed or 'U' for unemployed." << endl;
        }
    }
    else
    {
        cout << "Sorry, you must be at least 18 years old to apply for a loan." << endl;
    }
    return 0 ;
}