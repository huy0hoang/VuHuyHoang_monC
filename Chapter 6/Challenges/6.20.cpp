#include <iostream>
using namespace std;

double calculateProfit(int numShares, double purchasePrice, double purchaseCommission, double salePrice, double saleCommission) {
    double profit = ((numShares * salePrice) - saleCommission) - ((numShares * purchasePrice) + purchaseCommission);
    return profit;
}

int main() {
    int numShares;
    double purchasePrice, purchaseCommission, salePrice, saleCommission;

    cout << "Enter the number of shares: ";
    cin >> numShares;
    cout << "Enter the purchase price per share: $";
    cin >> purchasePrice;
    cout << "Enter the purchase commission paid: $";
    cin >> purchaseCommission;
    cout << "Enter the sale price per share: $";
    cin >> salePrice;
    cout << "Enter the sale commission paid: $";
    cin >> saleCommission;

    double profit = calculateProfit(numShares, purchasePrice, purchaseCommission, salePrice, saleCommission);

    if (profit > 0) {
        cout << "Profit: $" << profit << endl;
    }
    else if (profit < 0) {
        cout << "Loss: $" << -profit << endl;
    }
    else {
        cout << "No profit or loss." << endl;
    }

    return 0;
}