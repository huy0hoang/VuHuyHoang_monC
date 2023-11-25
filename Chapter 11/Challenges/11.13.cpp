#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    const int NUM_DRINKS = 5;
    Drink drinks[NUM_DRINKS] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    double totalEarnings = 0.0;

    while (true) {
        cout << "============================" << endl;
        cout << "Soft Drink Machine" << endl;
        cout << "============================" << endl;

        for (int i = 0; i < NUM_DRINKS; i++) {
            cout << i + 1 << ". " << drinks[i].name;
            cout << " ($" << fixed << setprecision(2) << drinks[i].cost << ")";
            cout << " - " << drinks[i].quantity << " left" << endl;
        }

        cout << "0. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }
        else if (choice >= 1 && choice <= NUM_DRINKS) {
            int index = choice - 1;
            if (drinks[index].quantity > 0) {
                cout << "Insert amount of money (up to $1.00): ";
                double amount;
                cin >> amount;

                if (amount >= 0.0 && amount <= 1.0) {
                    if (amount >= drinks[index].cost) {
                        double change = amount - drinks[index].cost;
                        cout << "Dispensing " << drinks[index].name << endl;
                        cout << "Change: $" << fixed << setprecision(2) << change << endl;
                        drinks[index].quantity--;
                        totalEarnings += drinks[index].cost;
                    }
                    else {
                        cout << "Insufficient amount of money. Drink not dispensed." << endl;
                    }
                }
                else {
                    cout << "Invalid amount of money. Drink not dispensed." << endl;
                }

                cout << endl;
            }
            else {
                cout << "Sorry, " << drinks[index].name << " is sold out." << endl;
                cout << endl;
            }
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
            cout << endl;
        }
    }

    cout << "Total earnings: $" << fixed << setprecision(2) << totalEarnings << endl;

    return 0;
}