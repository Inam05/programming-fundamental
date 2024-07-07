#include <iostream>
using namespace std;
int gcd(int num_1, int num_2);
int main()
{
    int num_1, num_2;
    cout << "Enter First Number: ";
    cin >> num_1;
    cout << endl;
    cout << "Enter Second Number: ";
    cin >> num_2;
    cout << endl;
    int result = gcd(num_1, num_2);
    cout << "GCD of " << num_1 << " and " << num_2 << " is: " << result << endl;
    return 0;
}
int gcd(int num_1, int num_2)
{
    int gcd_result;
    for (int i = 1; i <= num_1 && i <= num_2; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            gcd_result = i;
        }
    }
    return gcd_result;
}