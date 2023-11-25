#include <iostream>
using namespace std;

int main() {
    double cost = 14.95;
    double profitPercentage = 0.35;
    double sellingPrice;

    // Calculate selling price
    sellingPrice = cost + (cost * profitPercentage);

    // Display result
    cout << "The selling price of the circuit board is $" << sellingPrice << endl;

    return 0;
}