#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number of elements in an Array :";
    cin >> x;
    cout << "-----------------------------------------------" << endl;
    float sum = 0;
    float average = 0;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number :";
        cin >> A[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << endl;
        sum = sum + A[i];
    }
    cout << endl;
    average = sum / x;
    cout << endl;
    cout << "Average of above " << x << " elements of an Array A is :";
    cout << average;
    return 0;
}