#include <iostream>
using namespace std;
int main()
{
    string a;
    char character_to_find;
    cout << "Enter a string: ";
    cin >> a;
    cout << "Enter the character to find: ";
    cin >> character_to_find;
    int count = 0;
    for (char ch : a)
    {
        if (ch == character_to_find)
        {
            count++;
        }
    }
    cout << "The character '" << character_to_find << "' appears " << count << " times in the string." << endl;
    return 0;
}

/*
Begin
    Write "Enter a string:"
    Read a
    Write "Enter the character to find:"
    Read character_to_find
    Set count to 0
    For each character ch in a
        If ch == character_to_find
            Set count to count + 1
        End If
    End For
    Write "The character '"
    Write character_to_find
    Write "' appears "
    Write count
    Write" times in the string."
End

*/

