#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int unionArray[m + n];
    for (int i = 0; i < m; i++)
    {
        unionArray[i] = arr1[i];
    }
    int k = m;
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < m; j++)
        {
            if (arr2[i] == unionArray[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            unionArray[k++] = arr2[i];
        }
    }
    cout << "Union of the two arrays: ";
    for (int i = 0; i < k; i++)
    {
        cout << unionArray[i] << " ";
    }
    cout << endl;
    return 0;
}