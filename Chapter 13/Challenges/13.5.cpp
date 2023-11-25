#include <iostream>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(string desc, int units, double itemPrice) {
        description = desc;
        unitsOnHand = units;
        price = itemPrice;
    }

    string getDescription() const {
        return description;
    }

    void setDescription(string desc) {
        description = desc;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    cout << "Item #1:" << endl;
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units on Hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl;

    cout << endl;

    cout << "Item #2:" << endl;
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units on Hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl;

    cout << endl;

    cout << "Item #3:" << endl;
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units on Hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl;

    return 0;
}