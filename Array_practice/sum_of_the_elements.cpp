// sum of the elements of an array
#include <iostream>
using namespace std;
int main() {
    int x;
    int sum = 0;
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
        sum = sum + A[i];
    }
    cout << " ";
    cout<<endl;
    cout<<"Sum of the elements of the above array is  : ";
    cout<<sum;
    return 0;
}
#include <iostream>
