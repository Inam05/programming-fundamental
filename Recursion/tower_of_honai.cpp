#include <iostream>
using namespace std;
void Tower_of_Hanoi(int n, char s, char t, char a) {
    if (n > 0) {
        Tower_of_Hanoi(n - 1, s, a, t);
        cout << "Move disk " << n << " from " << s << " to " << t << endl;
        Tower_of_Hanoi(n - 1, a, t, s);
    }
}

/*
void moveDisks(int count, int needle1, int needle3, int needle2)
{
    if (count > 0)
    {
        moveDisks(count - 1, needle1, needle2, needle3);
        cout << "Move disk " << count << " from " << needle1
             << " to " << needle3 << "." << endl;
        moveDisks(count - 1, needle2, needle3, needle1);
    }
}*/

int main() {
    int num_Disks;
    cout << "Enter the number of disks: ";
    cin >> num_Disks;
    Tower_of_Hanoi(num_Disks, 'A', 'C', 'B');
    return 0;
}