#include <iostream>
using namespace std;

void space(int spaces)
{
    cout << string(spaces, ' ');
}

void star(int stars)
{
    cout << string(stars, '*');
}

void diamond(int n, int current_row)
{
    if (current_row > n)
    {
        return;
    }

    space(n - current_row);
    star(2 * current_row - 1);
    cout << endl;

    diamond(n, current_row + 1);

    space(n - current_row);
    star(2 * current_row - 1);
    cout << endl;
}

int main()
{
    int rows = 5;
    diamond(rows, 1);
    return 0;
}
