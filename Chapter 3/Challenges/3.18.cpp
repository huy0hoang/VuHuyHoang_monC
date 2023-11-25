#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal;
    double interestRate;
    int timesCompounded;

    // Get input from the user
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the interest rate (in percent): ";
    cin >> interestRate;
    cout << "Enter the number of times interest is compounded: ";
    cin >> timesCompounded;

    // Convert interest rate to decimal form
    interestRate /= 100;

    // Calculate the amount in savings
    double amount = principal * pow((1 + interestRate / timesCompounded), timesCompounded);

    // Calculate the interest earned
    double interest = amount - principal;

    // Display the report
    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}