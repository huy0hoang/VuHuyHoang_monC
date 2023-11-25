#include <iostream>
using namespace std;

double calculateProfit(int numShares, double purchasePrice, double purchaseCommission, double salePrice, double saleCommission)
{
    double profit = ((numShares * salePrice) - saleCommission) - ((numShares * purchasePrice) + purchaseCommission);
    return profit;
}

int main()
{
    int numStockSales;
    cout << "Enter the number of stock sales: ";
    cin >> numStockSales;

    double totalProfit = 0.0;

    for (int i = 1; i <= numStockSales; i++)
    {
        int numShares;
        double purchasePrice, purchaseCommission, salePrice, saleCommission;

        cout << "Enter the details for Stock Sale " << i << ":" << endl;
        cout << "Number of shares: ";
        cin >> numShares;
        cout << "Purchase price per share: $";
        cin >> purchasePrice;
        cout << "Purchase commission paid: $";
        cin >> purchaseCommission;
        cout << "Sale price per share: $";
        cin >> salePrice;
        cout << "Sale commission paid: $";
        cin >> saleCommission;

        double profit = calculateProfit(numShares, purchasePrice, purchaseCommission, salePrice, saleCommission);
        totalProfit += profit;
    }

    if (totalProfit > 0)
    {
        cout << "Total Profit: $" << totalProfit << endl;
    }
    else if (totalProfit < 0)
    {
        cout << "Total Loss: $" << -totalProfit << endl;
    }
    else
    {
        cout << "No profit or loss." << endl;
    }

    return 0;
}