/* Write pseudocode to display a menu of options and allow the user to choose an option repeatedly until they choose to exit using a do-while loop.*/

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Menu:" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cout << "4. Exit" << endl;
    do
    {
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        // Perform action based on user's choice
        if (choice == 1)
        {
            cout << "You chose Option 1." << endl;
            // Add code for Option 1
        }
        else if (choice == 2)
        {
            cout << "You chose Option 2." << endl;
            // Add code for Option 2
        }
        else if (choice == 3)
        {
            cout << "You chose Option 3." << endl;
            // Add code for Option 3
        }
        else if (choice == 4)
        {
            cout << "Exiting the program." << endl;
        }
        else
        {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);
    return 0;
}

/*PSEUDO CODE OF THE ABOVE CODE

Begin
    Set choice to 0
    (Display menu options)
    Write "Menu:"
    Write "1. Option 1"
    Write "2. Option 2"
    Write "3. Option 3"
    Write "4. Exit"
   do
        (Prompt user for choice)
        Write "Enter your choice (1-4):"
        Read choice
        (Perform action based on user's choice)
       If choice equals 1 then
            Write "You chose Option 1."
            (Add code for Option 1)
       Else If choice equals 2          then
            Write "You chose Option 2."
            (Add code for Option 2)
       Else If choice equals 3          then
            Write "You chose Option 3."
            (Add code for Option 3)
       Else If choice equals 4          then
            Write "Exiting the program."
       Else
            Write "Invalid choice. Please enter a number between 1 and 4."
       End If
  While choice is not equal to 4
  End While
End

*/
