#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double PACKAGE_A_PRICE = 39.99;
const double PACKAGE_B_PRICE = 59.99;
const double PACKAGE_C_PRICE = 69.99;

const int PACKAGE_A_MINUTES = 450;
const int PACKAGE_B_MINUTES = 900;

const double PACKAGE_A_ADDITIONAL_RATE = 0.45;
const double PACKAGE_B_ADDITIONAL_RATE = 0.40;

const int MONTHS[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const int HOURS[12] = { 744, 672, 744, 720, 744, 720, 744, 744, 720, 744, 720, 744 };

double calculateBill(char package, int minutes) {
    double totalBill = 0.0;

    switch (package) {
    case 'A':
        if (minutes > PACKAGE_A_MINUTES) {
            totalBill = PACKAGE_A_PRICE + (minutes - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_RATE;
        }
        else {
            totalBill = PACKAGE_A_PRICE;
        }
        break;
    case 'B':
        if (minutes > PACKAGE_B_MINUTES) {
            totalBill = PACKAGE_B_PRICE + (minutes - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_RATE;
        }
        else {
            totalBill = PACKAGE_B_PRICE;
        }
        break;
    case 'C':
        totalBill = PACKAGE_C_PRICE;
        break;
    default:
        totalBill = -1; // Invalid package
    }

    return totalBill;
}

bool isValidMonth(const string& month) {
    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    for (const string& m : months) {
        if (month == m) {
            return true;
        }
    }

    return false;
}

int getNumberOfMinutes(const string& month, int minutes) {
    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int monthIndex = -1;
    for (int i = 0; i < 12; i++) {
        if (month == months[i]) {
            monthIndex = i;
            break;
        }
    }

    if (monthIndex == -1) {
        return -1; // Invalid month
    }

    int hours = HOURS[monthIndex];
    int maxMinutes = hours * 60;

    if (minutes > maxMinutes) {
        return -2; // Invalid number of minutes
    }

    return maxMinutes;
}

int main() {
    char package;
    string month;
    int minutes;

    cout << "Mobile Service Provider" << endl;
    cout << "Package A: $39.99 per month, 450 minutes provided, additional minutes $0.45" << endl;
    cout << "Package B: $59.99 per month, 900 minutes provided, additional minutes $0.40" << endl;
    cout << "Package C: $69.99 per month, unlimited minutes provided" << endl;

    cout << "Enter the package (A, B, or C): ";
    cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selected." << endl;
        return 0;
    }

    cout << "Enter the month (e.g., January, February, etc.): ";
    cin >> month;

    if (!isValidMonth(month)) {
        cout << "Invalid month entered." << endl;
        return 0;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    int maxMinutes = getNumberOfMinutes(month, minutes);

    if (maxMinutes == -1) {
        cout << "Invalid month entered." << endl;
        return 0;
    }
    else if (maxMinutes == -2) {
        cout << "Invalid number of minutes entered. The maximum for " << month << " is " << maxMinutes << " minutes." << endl;
        return 0;
    }

    double bill = calculateBill(package, minutes);

    if (bill == -1) {
        cout << "Invalid package selected." << endl;
    }
    else {
        cout << "The total amount due is: $" << fixed << setprecision(The code got cut off.Here's the completed code:

            ```cpp
            2) << bill << endl;

        if (package == 'A') {
            double potentialSavingsB = calculateBill('B', minutes) - bill;
            double potentialSavingsC = calculateBill('C', minutes) - bill;

            if (potentialSavingsB > 0) {
                cout << "Potential savings by switching to Package B: $" << fixed << setprecision(2) << potentialSavingsB << endl;
            }

            if (potentialSavingsC > 0) {
                cout << "Potential savings by switching to Package C: $" << fixed << setprecision(2) << potentialSavingsC << endl;
            }
        }
        else if (package == 'B') {
            double potentialSavingsC = calculateBill('C', minutes) - bill;

            if (potentialSavingsC > 0) {
                cout << "Potential savings by switching to Package C: $" << fixed << setprecision(2) << potentialSavingsC << endl;
            }
        }
    }

    return 0;
}