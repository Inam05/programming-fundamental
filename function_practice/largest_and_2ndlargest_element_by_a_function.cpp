#include <iostream>
#include <climits>
using namespace std;
void largest_and_2ndlargest(int A[], int x)
{
    if (x < 2)
    {
        cout << "Array should have at least two elements to find the largest and second-largest elements." << endl;
        return;
    }
    int first_max = INT_MIN;
    int second_max = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (A[i] > first_max)
        {
            second_max = first_max;
            first_max = A[i];
        }
        else if (A[i] > second_max && A[i] != first_max)
        {
            second_max = A[i];
        }
    }
    cout << "The largest element in the array is: " << first_max << endl;
    cout << "The second-largest element in the array is: ";
    if (second_max == INT_MIN)
    {
        cout << "No second-largest element (all elements are equal)." << endl;
    }
    else
    {
        cout << second_max << endl;
    }
}
int main() {
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
    cout<<"The original array is : ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ";
    cout<<endl;
    largest_and_2ndlargest(A, x);
    return 0;
}