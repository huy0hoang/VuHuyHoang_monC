#include <iostream>
using namespace std;

void getOrderData(int& spoolsOrdered, int& spoolsInStock, bool& specialCharges, double& specialChargesPerSpool) {
    do {
        cout << "Enter the number of spools ordered: ";
        cin >> spoolsOrdered;

        if (spoolsOrdered < 1) {
            cout << "Invalid number of spools ordered. Please enter a number greater than 0." << endl;
        }
    } while (spoolsOrdered < 1);

    do {
        cout << "Enter the number of spools in stock: ";
        cin >> spoolsInStock;

        if (spoolsInStock < 0) {
            cout << "Invalid number of spools in stock. Please enter a non-negative number." << endl;
        }
    } while (spoolsInStock < 0);

    cout << "Are there special shipping and handling charges? (1 = Yes, 0 = No): ";
    cin >> specialCharges;

    if (specialCharges) {
        do {
            cout << "Enter the special charges per spool: $";
            cin >> specialChargesPerSpool;

            if (specialChargesPerSpool < 0) {
                cout << "Invalid special charges. Please enter a non-negative number." << endl;
            }
        } while (specialChargesPerSpool < 0);
    }
}

void displayOrderStatus(int spoolsOrdered, int spoolsInStock, bool specialCharges, double specialChargesPerSpool, double shippingHandling = 10.00) {
    int readyToShip;
    int backorder;

    if (spoolsInStock >= spoolsOrdered) {
        readyToShip = spoolsOrdered;
        backorder = 0;
    }
    else {
        readyToShip = spoolsInStock;
        backorder = spoolsOrdered - spoolsInStock;
    }

    double subtotal = readyToShip * 100.00;
    double totalShippingHandling = readyToShip * shippingHandling;
    double totalOrder = subtotal + totalShippingHandling;

    cout << "Number of spools ready to ship from current stock: " << readyToShip << endl;
    cout << "Number of spools on backorder: " << backorder << endl;
    cout << "Subtotal of the portion ready to ship: $" << subtotal << endl;
    cout << "Total shipping and handling charges on the portion ready to ship: $" << totalShippingHandling << endl;
    cout << "Total of the order ready to ship: $" << totalOrder << endl;
}

int main() {
    int spoolsOrdered;
    int spoolsInStock;
    bool specialCharges;
    double specialChargesPerSpool;

    getOrderData(spoolsOrdered, spoolsInStock, specialCharges, specialChargesPerSpool);
    displayOrderStatus(spoolsOrdered, spoolsInStock, specialCharges, specialChargesPerSpool);

    return 0;
}