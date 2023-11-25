#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numShares = 1000;
    double purchasePrice = 45.50;
    double salePrice = 56.90;
    double commissionRate = 0.02;

    // Calculate the amounts
    double purchaseAmount = numShares * purchasePrice;
    double purchaseCommission = purchaseAmount * commissionRate;
    double saleAmount = numShares * salePrice;
    double saleCommission = saleAmount * commissionRate;
    double profit = saleAmount - saleCommission - purchaseAmount - purchaseCommission;

    // Display the information
    cout << fixed << setprecision(2);
    cout << "Amount paid for the stock: $" << purchaseAmount << endl;
    cout << "Commission paid when buying the stock: $" << purchaseCommission << endl;
    cout << "Amount sold the stock for: $" << saleAmount << endl;
    cout << "Commission paid when selling the stock: $" << saleCommission << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}