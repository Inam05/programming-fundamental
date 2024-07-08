/*Write a C++ program that determines the eligibility of a candidate for a university admission based on the following criteria:
If the candidate's age is less than 18, display "Not eligible: Age criteria not met."
If the age is 18 or above, check the candidate's high school GPA.
If the GPA is less than 3.0, display "Not eligible: Insufficient GPA."
If the GPA is 3.0 or above, check the score in the entrance exam.
If the score is below 70, display "Not eligible: Low entrance exam score."
If the score is between 70 and 90 (inclusive), display "Eligible: Provisional admission."
If the score is above 90, display "Eligible: Full admission."*/


#include <iostream>
using namespace std;
int main()
{
    int age;
    float gpa;
    float exam_score;
    cout << "Enter candidate's age: ";
    cin >> age;
    if (age <18)
    {
        cout << "Not eligible due to age criteria is not met." << endl;
    }
    else
    {
        cout << "Enter high school GPA: ";
        cin >> gpa;
        if (gpa <3.0)
        {
            cout << "Not eligible due to the insufficient GPA." << endl;
        }
        else
        {
            cout << "Enter entrance exam score: ";
            cin >> exam_score;
            if (exam_score <70)
            {
                cout << "Not eligible due to low entrance exam score." << endl;
            }
            else if (exam_score >=70 && exam_score <=90)
            {
                cout << "Eligible on the base of provisional admission." << endl;
            }
            else
            {
                cout << "Eligible on the base of full admission." << endl;
            }
        }
    }
    return 0;
}