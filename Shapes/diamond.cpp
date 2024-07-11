// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of rows (odd number): ";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Please enter an odd number for a symmetric diamond pattern." << endl;
//         return 1;
//     }
//     // Upper part of the diamond
//     for (int i = 1; i <= n / 2 + 1; i++)
//     {
//         // Spaces before stars
//         for (int j = 1; j <= n / 2 + 1 - i; j++)
//         {
//             cout << " ";
//         }
//         // Stars
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     // Lower part of the diamond
//     for (int i = n / 2; i >= 1; i--)
//     {
//         // Spaces before stars
//         for (int j = 1; j <= n / 2 + 1 - i; j++)
//         {
//             cout << " ";
//         }
//         // Stars
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int num;
    int a;
    cout<<"Enter the star shape numbers : ";
    cin>>num;
    if(num%2==0)
    {
        a=num+1;
    }
    else
    {
        a=num;
    }
    // for upper part
    // loop for rows
    int rows,spac,col;
    for (rows = 1; rows<=a; rows++)
    {
        // loop for space 
        for (spac=1;spac<=a-rows;spac++)
        {
            cout<<" ";
        }
        //loops for star printing 
        for (col=1;col<=2*rows-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // for lower part 
    // loop for rows
    for (rows=a; rows>= 1;rows--)
    {
        // loop for space
        for (spac=1; spac<=a-rows; spac++)
        {
            cout<<" ";
        }
        // loop for printing stars
        for (col=1;col<=2*rows-1;col++)
        { 
            cout<<"*";
        }
        cout<<endl;
    }
}