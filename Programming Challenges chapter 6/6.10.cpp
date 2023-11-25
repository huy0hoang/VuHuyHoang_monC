#include <iostream>
#include <cmath>
using namespace std;

double futureValue(double presentValue, double interestRate, int months) {
    double monthlyRate = interestRate / 100.0;
    double futureValue = presentValue * pow(1 + monthlyRate, months);
    return futureValue;
}

int main() {
    double presentValue, interestRate;
    int months;

    cout << "Enter the present value of the account: $";
    cin >> presentValue;

    cout << "Enter the monthly interest rate (as a percentage): ";
    cin >> interestRate;

    cout << "Enter the number of months: ";
    cin >> months;

    double future = futureValue(presentValue, interestRate, months);
    cout << "The future value of the account after " << months << " months is: $" << future << endl;

    return 0;
}