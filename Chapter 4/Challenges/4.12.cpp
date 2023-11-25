#include <iostream>
using namespace std;

int main() {
    const int PACKAGE_PRICE = 99; // Retail price of the package

    // Ask for the number of units sold
    int quantity;
    cout << "Enter the number of units sold: ";
    cin >> quantity;

    // Validate the input
    if (quantity <= 0) {
        cout << "Invalid input. The number of units sold must be greater than 0." << endl;
        return 0;
    }

    // Calculate the total cost based on the quantity
    double totalCost;
    if (quantity >= 10 && quantity <= 19) {
        totalCost = quantity * PACKAGE_PRICE * 0.8; // 20% discount
    }
    else if (quantity >= 20 && quantity <= 49) {
        totalCost = quantity * PACKAGE_PRICE * 0.7; // 30% discount
    }
    else if (quantity >= 50 && quantity <= 99) {
        totalCost = quantity * PACKAGE_PRICE * 0.6; // 40% discount
    }
    else if (quantity >= 100) {
        totalCost = quantity * PACKAGE_PRICE * 0.5; // 50% discount
    }
    else {
        totalCost = quantity * PACKAGE_PRICE; // No discount
    }

    // Display the total cost
    cout << "Total cost of the purchase: $" << totalCost << endl;

    return 0;
}