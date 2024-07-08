/* Write pseudocode to find the average of all positive numbers entered by the user until they enter a negative number or 0 using a while loop. */

#include <iostream>
using namespace std;
int main()
{
    float count = 0;
    float sum = 0.0;
    float number;
    cout << "Enter positive numbers (If you enter 0 or a negative number,it will stop) :" << endl;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number <= 0)
        {
            if (count == 0)
            {
                cout << "No positive numbers entered. Exiting." << endl;
            }
            else
            {
                float average = sum / count;
                cout << "Average of positive numbers: " << average << endl;
            }
            break;
        }
        else
        {
            sum = sum + number;
            count++;
        }
    }
    return 0;
}

/*PSEUDO CODE OF ABOVE CODE

Begin
 Set count to 0
 Set sum to 0.0
 Set number to 0.0
 Write"Enter positive numbers (If you enter 0 or a negative number,it will stop) :"
    while true
        Write "Enter a number: "
        Read number.
       if number <= 0                            then
           if count == 0                         then
               Write "No positive numbers entered. Exiting."
          else
               set average to sum / count
               Write "Average of positive numbers: "
               Write average
         end if
            Break out of the loop
      else
            set sum to sum + number
            set count to count + 1
      end if
    end while
End

*/