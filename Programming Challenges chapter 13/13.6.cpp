#include <iostream>
#include <iomanip>

using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    Inventory(int number, double itemCost, int itemQuantity) {
        itemNumber = number;
        cost = (itemCost >= 0) ? itemCost : 0.0;
        quantity = (itemQuantity >= 0) ? itemQuantity : 0;
        setTotalCost();
    }

    void setItemNumber(int number) {
        itemNumber = (number >= 0) ? number : 0;
    }

    void setQuantity(int itemQuantity) {
        quantity = (itemQuantity >= 0) ? itemQuantity : 0;
        setTotalCost();
    }

    void setCost(double itemCost) {
        cost = (itemCost >= 0) ? itemCost : 0.0;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    Inventory item1; // Create an Inventory object using the default constructor

    // Set values for item1
    item1.setItemNumber(1001);
    item1.setQuantity(10);
    item1.setCost(5.99);

    // Display item1 details
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << fixed << setprecision(2) << item1.getCost() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item1.getTotalCost() << endl;

    cout << endl;

    // Create an Inventory object using the second constructor
    Inventory item2(2002, 3.49, 20);

    // Display item2 details
    cout << "Item Number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: $" << fixed << setprecision(2) << item2.getCost() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item2.getTotalCost() << endl;

    return 0;
}