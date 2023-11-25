#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.02;

    string month;
    int year;
    double totalCollected;

    // Get input from the user
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected: $";
    cin >> totalCollected;

    // Calculate the sales, state sales tax, county sales tax, and total sales tax
    double sales = totalCollected / 1.06;
    double stateSalesTax = sales * STATE_TAX_RATE;
    double countySalesTax = sales * COUNTY_TAX_RATE;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // Display the sales tax report
    cout << "Month: " << month << endl;
    cout << "---------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Collected: $" << totalCollected << endl;
    cout << "Sales: $" << sales << endl;
    cout << "County Sales Tax: $" << countySalesTax << endl;
    cout << "State Sales Tax: $" << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}