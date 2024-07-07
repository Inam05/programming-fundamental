#include <iostream>

using namespace std; // Adding the namespace directive

// Function to find and remove the first occurrence of removeItem in the array
void removeAt(int arr[], int &size, int index)
{
    if (size == 0)
    {
        cout << "Array is empty. Cannot remove element." << endl;
        return;
    }

    if (index < 0 || index >= size)
    {
        cout << "Index is out of range." << endl;
        return;
    }

    // Shift elements to the left to overwrite the removed element
    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;
}

// Function to count occurrences of each number and display the results
void countAndDisplay(int arr[], int size)
{
    if (size == 0)
    {
        cout << "Array is empty." << endl;
        return;
    }

    // Process each unique number in the array
    for (int i = 0; i < size; ++i)
    {
        int count = 1; // Initialize count for the current number

        // Check if the current number has been processed before
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] == arr[i])
            {
                // If the number is found again, increment the count and remove the duplicate
                ++count;
                removeAt(arr, size, j);
                --j; // Adjust the index to recheck the same position in case there are more duplicates
            }
        }

        // Display the result for the current number
        cout << arr[i] << " appears " << count << " times." << endl;
    }
}

int main()
{
    const int maxSize = 100;
    int scores[maxSize];
    int size = 0;
    int input;

    // Read positive integers until -999 is encountered
    while (true)
    {
        cout << "Enter a positive integer (-999 to end): ";
        cin >> input;

        if (input == -999)
        {
            break;
        }

        if (input > 0)
        {
            scores[size++] = input;
        }
        else
        {
            cout << "Invalid input. Please enter a positive integer." << endl;
        }
    }

    // Display the original list
    cout << "Original list: ";
    for (int i = 0; i < size; ++i)
    {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Count occurrences and display the results
    countAndDisplay(scores, size);

    return 0;
}
