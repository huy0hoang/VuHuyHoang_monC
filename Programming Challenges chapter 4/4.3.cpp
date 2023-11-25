#include <iostream>
using namespace std;

int main() {
    // Ask the user to enter the month, day, and year
    int month, day, year;
    cout << "Enter the month (numeric form): ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the two-digit year: ";
    cin >> year;

    // Calculate the product of the month and day
    int product = month * day;

    // Check if the product is equal to the year
    if (product == year) {
        cout << "The date is magic!" << endl;
    }
    else {
        cout << "The date is not magic." << endl;
    }

    return 0;
}