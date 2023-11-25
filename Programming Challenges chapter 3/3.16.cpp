#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double SENIOR_EXEMPTION = 5000.0;

    double actualValue;
    double taxRate;

    // Get input from the user
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;
    cout << "Enter the current tax rate (per $100 of assessed value): ";
    cin >> taxRate;

    // Calculate the assessed value and taxable value
    double assessedValue = actualValue * 0.6;
    double taxableValue = assessedValue - SENIOR_EXEMPTION;

    // Calculate the annual property tax and quarterly tax bill
    double annualPropertyTax = taxableValue / 100 * taxRate;
    double quarterlyTaxBill = annualPropertyTax / 4;

    // Display the annual property tax and quarterly tax bill
    cout << fixed << setprecision(2);
    cout << "Annual Property Tax: $" << annualPropertyTax << endl;
    cout << "Quarterly Tax Bill: $" << quarterlyTaxBill << endl;

    return 0;
}