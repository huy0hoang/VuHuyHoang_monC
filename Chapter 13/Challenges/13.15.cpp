#include <iostream>
#include <cmath>

using namespace std;

class Mortgage {
private:
    double loan;
    double rate;
    int years;

public:
    Mortgage() {
        loan = 0.0;
        rate = 0.0;
        years = 0;
    }

    void setLoanAmount(double loanAmount) {
        if (loanAmount >= 0) {
            loan = loanAmount;
        }
        else {
            cout << "Invalid loan amount. Loan amount cannot be negative." << endl;
        }
    }

    void setInterestRate(double interestRate) {
        if (interestRate >= 0) {
            rate = interestRate;
        }
        else {
            cout << "Invalid interest rate. Interest rate cannot be negative." << endl;
        }
    }

    void setLoanYears(int loanYears) {
        if (loanYears >= 0) {
            years = loanYears;
        }
        else {
            cout << "Invalid loan years. Loan years cannot be negative." << endl;
        }
    }

    double calculateMonthlyPayment() const {
        double monthlyRate = rate / 12.0 / 100.0; // Convert annual rate to monthly rate
        int totalMonths = years * 12;

        double monthlyPayment = (loan * monthlyRate * pow(1 + monthlyRate, totalMonths)) /
            (pow(1 + monthlyRate, totalMonths) - 1);

        return monthlyPayment;
    }

    double calculateTotalAmountPaid() const {
        double monthlyPayment = calculateMonthlyPayment();
        int totalMonths = years * 12;

        double totalAmountPaid = monthlyPayment * totalMonths;

        return totalAmountPaid;
    }
};

int main() {
    Mortgage mortgage;

    double loanAmount;
    double interestRate;
    int loanYears;

    cout << "Enter the loan amount: $";
    cin >> loanAmount;
    mortgage.setLoanAmount(loanAmount);

    cout << "Enter the annual interest rate: ";
    cin >> interestRate;
    mortgage.setInterestRate(interestRate);

    cout << "Enter the number of years of the loan: ";
    cin >> loanYears;
    mortgage.setLoanYears(loanYears);

    cout << "Monthly payment: $" << mortgage.calculateMonthlyPayment() << endl;
    cout << "Total amount paid: $" << mortgage.calculateTotalAmountPaid() << endl;

    return 0;
}