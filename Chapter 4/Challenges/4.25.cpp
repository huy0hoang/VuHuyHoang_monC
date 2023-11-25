#include <iostream>
#include <iomanip>
using namespace std;

const double PACKAGE_A_PRICE = 39.99;
const double PACKAGE_B_PRICE = 59.99;
const double PACKAGE_C_PRICE = 69.99;

const int PACKAGE_A_MINUTES = 450;
const int PACKAGE_B_MINUTES = 900;

const double PACKAGE_A_ADDITIONAL_RATE = 0.45;
const double PACKAGE_B_ADDITIONAL_RATE = 0.40;

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

int main() {
    char package;
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

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid number of minutes entered." << endl;
        return 0;
    }

    double bill = calculateBill(package, minutes);

    if (bill == -1) {
        cout << "Invalid package selected." << endl;
    }
    else {
        cout << "The total amount due is: $" << fixed << setprecision(2) << bill << endl;
    }

    return 0;
}