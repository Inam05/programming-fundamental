#include <iostream>
using namespace std;
int main() {
  int x;
  cout << "Enter the number of elements in Array :";
  cin >> x;
  float A[x];
  cout << endl;
  for(int i=1; i<=x; i++) 
  {
    cout << "Enter Number " << i << " : ";
    cin >> A[i];
  }
  for(int i=1; i<=x; i++)
  {
    if(A[0] < A[i])
      A[0] = A[i];
  }
  cout << endl << "Largest element = " << A[0];
  return 0;
}