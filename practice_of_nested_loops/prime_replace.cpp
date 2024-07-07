// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ,i,j;
//     cout<<"Enter the nth number : ";
//     cin>>n;
//     for ( i = 2; i<n; i++)
//     {
//         for ( j = 2; j < i; j++)
//         {
//             if(i%j==0)
//             {
//                 cout<<" ";
//                 break;
//             }
//         }
//         if(i==j)
//         {
//             cout<<j;
//         }
//         cout<<" ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the nth number: ";
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        bool x = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                x = false;
                break;
            }
        }
        if (x==true)
        {
            cout << i << " is a Prime Number "<<endl;
        }
        else
        {
            cout << i << " is a Non Prime Number "<<endl;
        }
    }
    return 0;
}