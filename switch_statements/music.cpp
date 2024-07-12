#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Simple Music Player\n";
    cout << "1. Play\n";
    cout << "2. Pause\n";
    cout << "3. Stop\n";
    cout << "4. Next Track\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

        switch (choice) {
            case 1:
                cout << "Playing music...\n";
                break;
            case 2:
                cout << "Pausing music...\n";
                break;
            case 3:
                cout << "Stopping music...\n";
                break;
            case 4:
                cout << "Playing next track...\n";
                break;
            case 5:
                cout << "Exiting music player.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
}
