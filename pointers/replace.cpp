#include <iostream>
#include <cstring>

using namespace std;

char *concatenateStrings(const char *str1, const char *str2)
{
    char *result = new char[strlen(str1) + strlen(str2) + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main()
{
    const char *firstName = "John";
    const char *lastName = "Doe";

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    char *fullName = concatenateStrings(firstName, lastName);

    cout << "Full Name: " << fullName << endl;

    char charArray[] = "Hello, Pointers!";

    cout << "Original Character Array: " << charArray << endl;

    char *substrPtr = strstr(charArray, "Pointers");
    if (substrPtr != nullptr)
    {
        strncpy(substrPtr, "C++", strlen("C++"));
    }

    cout << "Updated Character Array: " << charArray << endl;

    delete[] fullName;

    return 0;
}
