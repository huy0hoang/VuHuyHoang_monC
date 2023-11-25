#include <iostream>
using namespace std;

int main() {
    const double MONTHLY_FEE = 10.0; // Monthly fee for the account
    const double BALANCE_THRESHOLD = 400.0; // Balance threshold for additional fee

    // Ask for the beginning balance
    double beginningBalance;
    cout << "Enter the beginning balance: $";
    cin >> beginningBalance;

    // Check if the account is overdrawn
    if (beginningBalance < 0) {
        cout << "URGENT: The account is overdrawn!" << endl;
        return 0;
    }

    // Ask for the number of checks written
    int numChecks;
    cout << "Enter the number of checks written: ";
    cin >> numChecks;

    // Validate the input
    if (numChecks < 0) {
        cout << "Invalid input. The number of checks written cannot be negative." << endl;
        return 0;
    }

    // Calculate the total service fees
    double serviceFees = MONTHLY_FEE;

    // Add check fees based on the number of checks written
    if (numChecks < 20) {
        serviceFees += numChecks * 0.10;
    }
    else if (numChecks >= 20 && numChecks <= 39) {
        serviceFees += numChecks * 0.08;
    }
    else if (numChecks >= 40 && numChecks <= 59) {
        serviceFees += numChecks * 0.06;
    }
    else {
        serviceFees += numChecks * 0.04;
    }

    // Check if additional fee applies due to low balance
    if (beginningBalance < BALANCE_THRESHOLD) {
        serviceFees += 15.0;
    }

    // Display the total service fees
    cout << "Total service fees for the month: $" << serviceFees << endl;

    return 0;
}