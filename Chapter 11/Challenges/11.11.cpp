#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

void enterExpenses(MonthlyBudget& budget) {
    cout << "Enter the amounts spent in each budget category:" << endl;

    cout << "Housing: $";
    cin >> budget.housing;

    cout << "Utilities: $";
    cin >> budget.utilities;

    cout << "Household Expenses: $";
    cin >> budget.householdExpenses;

    cout << "Transportation: $";
    cin >> budget.transportation;

    cout << "Food: $";
    cin >> budget.food;

    cout << "Medical: $";
    cin >> budget.medical;

    cout << "Insurance: $";
    cin >> budget.insurance;

    cout << "Entertainment: $";
    cin >> budget.entertainment;

    cout << "Clothing: $";
    cin >> budget.clothing;

    cout << "Miscellaneous: $";
    cin >> budget.miscellaneous;
}

void displayReport(const MonthlyBudget& budget) {
    double totalBudget = budget.housing + budget.utilities + budget.householdExpenses +
        budget.transportation + budget.food + budget.medical +
        budget.insurance + budget.entertainment + budget.clothing +
        budget.miscellaneous;

    cout << fixed << setprecision(2);
    cout << "Monthly Budget Report:" << endl;
    cout << "----------------------" << endl;

    cout << "Housing: $" << budget.housing << "\t\t";
    cout << (budget.housing > 500.0 ? "Over" : "Under") << endl;

    cout << "Utilities: $" << budget.utilities << "\t\t";
    cout << (budget.utilities > 150.0 ? "Over" : "Under") << endl;

    cout << "Household Expenses: $" << budget.householdExpenses << "\t";
    cout << (budget.householdExpenses > 65.0 ? "Over" : "Under") << endl;

    cout << "Transportation: $" << budget.transportation << "\t";
    cout << (budget.transportation > 50.0 ? "Over" : "Under") << endl;

    cout << "Food: $" << budget.food << "\t\t";
    cout << (budget.food > 250.0 ? "Over" : "Under") << endl;

    cout << "Medical: $" << budget.medical << "\t\t";
    cout << (budget.medical > 30.0 ? "Over" : "Under") << endl;

    cout << "Insurance: $" << budget.insurance << "\t\t";
    cout << (budget.insurance > 100.0 ? "Over" : "Under") << endl;

    cout << "Entertainment: $" << budget.entertainment << "\t";
    cout << (budget.entertainment > 150.0 ? "Over" : "Under") << endl;

    cout << "Clothing: $" << budget.clothing << "\t\t";
    cout << (budget.clothing > 75.0 ? "Over" : "Under") << endl;

    cout << "Miscellaneous: $" << budget.miscellaneous << "\t";
    cout << (budget.miscellaneous > 50.0 ? "Over" : "Under") << endl;

    cout << "----------------------" << endl;
    cout << "Total Budget: $" << totalBudget << "\t";
    cout << (totalBudget > 1415.0 ? "Over" : "Under") << endl;
}

int main() {
    MonthlyBudget budget;

    enterExpenses(budget);

    cout << endl;

    displayReport(budget);

    return 0;
}