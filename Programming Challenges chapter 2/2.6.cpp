#include <iostream>
using namespace std;

int main() {
    double payAmount = 2200.0;  // Amount of pay per period
    int payPeriods = 26;  // Number of pay periods in a year

    double annualPay = payAmount * payPeriods;

    cout << "The employee's total annual pay: $" << annualPay << endl;

    return 0;
}