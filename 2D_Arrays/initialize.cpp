#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the rows of the array : ";
    cin >> x;
    int y;
    cout << "Enter the columns of the array : ";
    cin >> y;
    int A[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Enter the element : ";
            cin >> A[i][j];
            cout << endl;
        }
    }
    cout << "The array is :";
    cout << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << A[i][j];
        }
        cout << " ";
        cout << endl;
    }
    return 0;
}