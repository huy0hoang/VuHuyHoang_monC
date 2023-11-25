#include <iostream>
using namespace std;

int main() {
    // Ask the user to enter the number of coins
    int pennies, nickels, dimes, quarters;
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value of the coins
    double totalValue = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;

    // Check if the total value is equal to one dollar
    if (totalValue == 1.0) {
        cout << "Congratulations! You won the game." << endl;
    }
    else if (totalValue < 1.0) {
        cout << "Sorry, the amount entered was less than one dollar." << endl;
    }
    else {
        cout << "Sorry, the amount entered was more than one dollar." << endl;
    }

    return 0;
}