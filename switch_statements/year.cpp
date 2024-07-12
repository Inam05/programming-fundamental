#include <iostream>
using namespace std;
// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
// Function to print the calendar for a given month and year
void printCalendar(int month, int year) {
    switch (month) {
        case 1:
            cout << "January " << year << "\n";
            break;
        case 2:
            cout << "February " << year << "\n";
            break;
        case 3:
            cout << "March " << year << "\n";
            break;
        case 4:
            cout << "April " << year << "\n";
            break;
        case 5:
            cout << "May " << year << "\n";
            break;
        case 6:
            cout << "June " << year << "\n";
            break;
        case 7:
            cout << "July " << year << "\n";
            break;
        case 8:
            cout << "August " << year << "\n";
            break;
        case 9:
            cout << "September " << year << "\n";
            break;
        case 10:
            cout << "October " << year << "\n";
            break;
        case 11:
            cout << "November " << year << "\n";
            break;
        case 12:
            cout << "December " << year << "\n";
            break;
        default:
            cout << "Invalid month.\n";
            return;
    }
    cout << "Mo Tu We Th Fr Sa Su\n";
    // Get the day of the week for the first day of the month
    int dayOfWeek = (1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    // Adjust for January and February in leap years
    if (month < 3 && isLeapYear(year))
        dayOfWeek = (dayOfWeek + 6) % 7;

    // Print leading spaces
    for (int i = 0; i < dayOfWeek; ++i)
        cout << "   ";

    // Print the days of the month
    int daysInMonth;
    switch (month) {
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }
    for (int day = 1; day <= daysInMonth; ++day) {
        cout << (day < 10 ? " " : "") << day << " ";
        if ((day + dayOfWeek) % 7 == 0 || day == daysInMonth)
            cout << "\n";
    }
}
int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    printCalendar(month, year);

    return 0;
}
