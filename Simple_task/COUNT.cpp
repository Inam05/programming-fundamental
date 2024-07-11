#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int sum = 0, ans = 1;
   for (int i = 1; i <= n; i++)
   {
      ans = i * i;
      sum = sum + ans;
   }
   "\n";
   cout << "sum of the series :";
   cout << sum;
}