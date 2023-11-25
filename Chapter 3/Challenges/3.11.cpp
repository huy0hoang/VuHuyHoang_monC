#include <iostream>
using namespace std;

int main() {
    double loanPayment, insurance, gas, oil, tires, maintenance;

    // Get input from the user
    cout << "Enter the monthly loan payment: $";
    cin >> loanPayment;
    cout << "Enter the monthly insurance cost: $";
    cin >> insurance;
    cout << "Enter the monthly gas cost: $";
    cin >> gas;
    cout << "Enter the monthly oil cost: $";
    cin >> oil;
    cout << "Enter the monthly tires cost: $";
    cin >> tires;
    cout << "Enter the monthly maintenance cost: $";
    cin >> maintenance;

    // Calculate the total monthly cost
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;

    // Calculate the total annual cost
    double totalAnnualCost = totalMonthlyCost * 12;

    // Display the total monthly and annual costs
    cout << "Total monthly cost: $" << totalMonthlyCost << endl;
    cout << "Total annual cost: $" << totalAnnualCost << endl;

    return 0;
}