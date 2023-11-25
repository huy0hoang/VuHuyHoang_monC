#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double loanAmount;
    double annualInterestRate;
    int numberOfPayments;

    // Get input from the user
    cout << "Enter the loan amount: $";
    cin >> loanAmount;
    cout << "Enter the annual interest rate (in percent): ";
    cin >> annualInterestRate;
    cout << "Enter the number of payments: ";
    cin >> numberOfPayments;

    // Convert annual interest rate to monthly interest rate
    double monthlyInterestRate = annualInterestRate / 12 / 100;

    // Calculate the monthly payment
    double numerator = monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments);
    double denominator = pow(1 + monthlyInterestRate, numberOfPayments) - 1;
    double monthlyPayment = loanAmount * (numerator / denominator);

    // Calculate the total amount paid back and the interest paid
    double amountPaidBack = monthlyPayment * numberOfPayments;
    double interestPaid = amountPaidBack - loanAmount;

    // Display the report
    cout << fixed << setprecision(2);
    cout << "Loan Amount: $" << loanAmount << endl;
    cout << "Monthly Interest Rate: " << annualInterestRate / 12 << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << amountPaidBack << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}