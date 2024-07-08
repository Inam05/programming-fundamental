/*Write c++ program to check that in the selected password is the only one Alphabet is capital or not , @ least one special character is used or not ,  if the lenghth of the password is leesser than 6 , suggest that to rewite the new password , if the password length is > 8 , then also write its a strong password , there should be @ least one capital letter , one special character , 3 numbers and greater lenghth > 6 using nested if else conditions*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string password;
    cout << "Enter Password : ";
    getline(cin, password);
    isValidPassword(password);
    return 0;
}
bool isValidPassword(string password)
{
    bool upper = false;
    bool lower = false;
    bool length = false;
    bool digit = false;
    bool specialchar = false;
    if (password.length() >= 12)
    {
        length = true;
    }
    for (int i = 0; i < password.length(); i++) // Using loop till array length
    {
        if (isdigit(password[i])) // Check isdigit
        {
            digit = true;
        }
        else if (islower(password[i])) // Check lowercase
        {
            lower = true;
        }
        else if (isupper(password[i])) // Check Uppercase
        {
            upper = true;
        }
        else if (ispunct(password[i])) // For special char
        {
            specialchar = true;
        }
    }
    if (!digit) // For digit
    {
        cout << "\nInvalid Password!!\nShould contain at least 1 digit" << endl;
        return false;
    }
    else if (!upper) // For uppercase
    {
        cout << "\nInvalid Password!!\nShould contain at least 1 UpperCase" << endl;
        return false;
    }
    else if (!length) // For length
    {
        cout << "\nInvalid Password!!\nLength should be at least 12." << endl;
        return false;
    }
    else if (!lower) // For lowercase
    {
        cout << "\nInvalid Password!!\nShould contain at least 1 LowerCase" << endl;
        return false;
    }
    else if (!specialchar) // For special char
    {
        cout << "\nInvalid Password!!\nShould contain at least 1 Special Character." << endl;
        return false;
    }
    else // Else for valid password
    {
        cout << "Valid Password!!" << endl;
        return true;
    }
}
