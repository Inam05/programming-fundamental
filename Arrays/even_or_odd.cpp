#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the size of the array : ";
    cin >> x;
    int A[x];
    for (int i = 0; i < x; ++i)
    {
        cout << "Enter number :";
        cin >> A[i];
    }
    cout<<"______________________________________________"<<endl;
    int even_count = 0, odd_count = 0;
    cout << "Even elements are : ";
    for (int i = 0; i < x; ++i)
    {
        if (A[i] % 2 == 0)
        {
            cout << A[i] << " ";
            even_count++;
        }
    }
    cout<<endl;
    cout << "Odd elements are : ";
    for (int i = 0; i < x; ++i)
    {
        if (A[i] % 2 != 0)
        {
            cout << A[i] << " ";
            odd_count++;
        }
    }
    cout<<endl;
    cout << "Total even elements : " << even_count << endl;
    cout << "Total odd elements : " << odd_count << endl;
    return 0;
}