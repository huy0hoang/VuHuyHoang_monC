#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string description;
    double cost;
    int onHand;

public:
    InventoryItem(string desc, double c, int onH) {
        description = desc;
        cost = c;
        onHand = onH;
    }

    string getDescription() const {
        return description;
    }

    double getCost() const {
        return cost;
    }

    int getOnHand() const {
        return onHand;
    }

    void setOnHand(int onH) {
        onHand = onH;
    }
};

class CashRegister {
private:
    InventoryItem item;

public:
    CashRegister(const InventoryItem& i) {
        item = i;
    }

    void purchaseItem(int quantity) {
        if (quantity > 0) {
            double cost = item.getCost();
            double unitPrice = cost + (0.3 * cost);
            double subtotal = unitPrice * quantity;
            double tax = 0.06 * subtotal;
            double total = subtotal + tax;

            cout << "Purchase Subtotal: $" << subtotal << endl;
            cout << "Sales Tax: $" << tax << endl;
            cout << "Total: $" << total << endl;

            int updatedOnHand = item.getOnHand() - quantity;
            item.setOnHand(updatedOnHand);
        }
        else {
            cout << "Invalid quantity. Quantity must be greater than 0." << endl;
        }
    }
};

int main() {
    InventoryItem item("Widget", 10.0, 50);

    int quantity;
    cout << "Enter the quantity of items being purchased: ";
    cin >> quantity;

    CashRegister cashRegister(item);
    cashRegister.purchaseItem(quantity);

    cout << "Updated on-hand quantity: " << item.getOnHand() << endl;

    return 0;
}