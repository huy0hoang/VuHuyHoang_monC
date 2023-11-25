#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double futureValue, double interestRate, int years) {
    double presentValue = futureValue / pow(1 + interestRate, years);
    return presentValue;
}

int main() {
    double futureValue, interestRate;
    int years;

    cout << "Enter the desired future value: $";
    cin >> futureValue;

    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> interestRate;

    cout << "Enter the number of years: ";
    cin >> years;

    double present = presentValue(futureValue, interestRate, years);
    cout << "The present value needed to achieve $" << futureValue << " in " << years << " years is: $" << present << endl;

    return 0;
}