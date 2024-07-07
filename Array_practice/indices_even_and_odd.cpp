#include <iostream>
using namespace std;
void calculate_sums( int A[], int x)
{
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + A[i];
        }
        else
        {
            sum_odd = sum_odd + A[i];
        }
    }
    cout << "Sum of elements at even indices: " << sum_even << endl;
    cout << "Sum of elements at odd indices: " << sum_odd << endl;
}
int main()
{
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ";
    cout<<endl;
    calculate_sums(A, x);
    return 0;
}