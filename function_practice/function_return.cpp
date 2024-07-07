// #include<iostream>
// using namespace std;
// void product ()
// {
//     cout<<"product";
//     product();
// }
// int main()
// {
//     product();
//     return 0;
// }

#include <iostream>
using namespace std;
int recursion_Counter = 0;
const int MAX_RECURSION = 5;

void product()
{
    if (recursion_Counter < MAX_RECURSION)
    {
        cout << "product ";
        recursion_Counter++;
        product();
    }
    else
    {
        cout << "Base case reached, stopping recursion." << endl;
    }
}

int main()
{
    product();
    return 0;
}