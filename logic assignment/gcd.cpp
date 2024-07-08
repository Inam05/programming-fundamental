/*Write pseudocode to find the greatest common divisor (GCD) of two numbers using a for loop.*/

#include <iostream>
using namespace std;
int main()
{
    int num_1;
    cout << "Enter First Number :";
    cin >> num_1;
    cout << endl;
    int num_2;
    cout << "Enter Second Number :";
    cin >> num_2;
    int gcd;
    for (int i = 1; i <= num_1 && i <= num_2; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << endl<< gcd << " is GCD of " << num_1 << " & " << num_2;
    return 0;
}

/*
PSEUDOCODE OF THE ABOVE CODE

Begin
    Write "Enter First Number :"
    Read num_1
    Write "Enter Second Number :"
    Read num_2
   For i= 1 to num_1 && num_2
       If num_1 mod i == 0 && num_2 mod i == 0       then
            set gcd to i
      End If
  End For
    Write gcd
    Write " is GCD of "
    Write num_1
    Write " & "
    Write num_2
End


*/