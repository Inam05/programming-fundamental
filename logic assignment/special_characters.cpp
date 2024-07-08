/* Write pseudocode to read and print characters until a specific character is entered using a while loop.*/

#include <iostream>
using namespace std;
int main()
{
    char specific_character;
    cout << "Enter the target character, where you want to stop : ";
    cin >> specific_character;
    char input_character;
    cout << "Enter characters (If you enter " << specific_character << " then it will stop) : ";
    while (true)
    {
        cin >> input_character;
        if (input_character == specific_character)
        {
            cout << "Specific character '" << specific_character << "' found. Exiting loop." << endl;
            break;
        }
        else
        {
            cout << "Entered character: " << input_character << endl;
        }
    }
    return 0;
    
}

/*

Psuedo Code Of The Above Code
Begin
    Write "Enter the character, where you want to stop : "
    Read specific_character
    Write "Enter characters (If you enter "
    Write specific_character
    Write " then it will stop) : "
   while true                                         do
        Read input_character
       if input_character == specific_character      then
            Write "Specific character '"
            Write specific_character
            Write "' found. Exiting loop."
            Break out of the loop
       else
            Write "Entered character: "
            Write input_character
       end if
  end while
End

*/