#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

int getDaysInMonth(int month, int year) {
    switch (month) {
    case 1: // January
    case 3: // March
    case 5: // May
    case 7: // July
    case 8: // August
    case 10: // October
    case 12: // December
        return 31;
    case 4: // April
    case 6: // June
    case 9: // September
    case 11: // November
        return 30;
    case 2: // February
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1; // Invalid month
    }
}

int main() {
    // Ask the user to enter the month and year
    int month, year;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    // Get the number of days in the month
    int days = getDaysInMonth(month, year);

    // Display the result
    if (days == -1) {
        cout << "Invalid month entered." << endl;
    }
    else {
        cout << days << " days" << endl;
    }

    return 0;
}