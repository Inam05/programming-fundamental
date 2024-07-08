/* Write pseudocode to print the Fibonacci sequence up to a certain number using a for loop.*/

#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout << "Enter the limit for Fibonacci sequence: ";
    cin >> limit;
    int first = 0, second = 1, next_term;
    cout << "Fibonacci Sequence up to " << limit << ": ";
    for (int i = 0; i <= limit; i++)
    {
        cout << first << " ";
        next_term = first + second;
        first = second;
        second = next_term;
    }
    cout << endl;
}

/*PSEUDO CODE OF THE ABOVE CODE

Begin
    Write "Enter the limit for Fibonacci sequence: "
    Read limit
    Set first to 0
    Set second to 1
    Write "Fibonacci Sequence up to "
    Write limit
    Write ": "
   For i = 0 to limit
      Write first
      Write " "
      Set next_term to first + second
      set first to second
      set second to next_term
   End For
End

*/