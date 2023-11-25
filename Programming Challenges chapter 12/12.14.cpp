#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

void calculateInventorySummary(ifstream& inFile) {
    double totalWholesaleValue = 0.0;
    double totalRetailValue = 0.0;
    int totalQuantity = 0;
    InventoryItem item;
    string line;

    while (getline(inFile, line)) {
        size_t pos = line.find(",");
        item.description = line.substr(0, pos);
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.quantity = stoi(line.substr(0, pos));
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.wholesaleCost = stod(line.substr(0, pos));
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.retailCost = stod(line.substr(0, pos));
        line.erase(0, pos + 1);

        item.dateAdded = line;

        totalWholesaleValue += item.wholesaleCost * item.quantity;
        totalRetailValue += item.retailCost * item.quantity;
        totalQuantity += item.quantity;
    }

    cout << "Total Wholesale Value: $" << totalWholesaleValue << endl;
    cout << "Total Retail Value: $" << totalRetailValue << endl;
    cout << "Total Quantity: " << totalQuantity << endl;
}

int main() {
    ifstream inFile("inventory.txt");

    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    calculateInventorySummary(inFile);

    return 0;
}