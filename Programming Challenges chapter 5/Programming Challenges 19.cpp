#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    cout << "Enter your budget for the month: ";
    cin >> budget;

    double totalExpenses = 0.0;
    double expense;
    string expenseName;

    cout << "Enter your expenses for the month (enter 0 to finish):\n";
    while (true) {
        cout << "Expense name: ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, expenseName);

        if (expenseName == "0") {
            break;
        }

        cout << "Expense amount: ";
        cin >> expense;

        totalExpenses += expense;
    }

    double difference = budget - totalExpenses;
    cout << fixed << setprecision(2);

    if (difference >= 0) {
        cout << "You are under budget by $" << difference << endl;
    }
    else {
        cout << "You are over budget by $" << -difference << endl;
    }

    return 0;
}