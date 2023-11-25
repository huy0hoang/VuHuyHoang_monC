#include <iostream>

using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll() {
        hourlyPayRate = 0.0;
        hoursWorked = 0.0;
        totalPay = 0.0;
    }

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours) {
        if (hours > 60) {
            cout << "Invalid hours worked! Maximum hours allowed is 60." << endl;
            exit(1);
        }
        hoursWorked = hours;
    }

    double calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
        return totalPay;
    }

    double getTotalPay() const {
        return totalPay;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES];
    double hours;

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter the hours worked for employee " << (i + 1) << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        double payRate;
        cout << "Enter the hourly pay rate for employee " << (i + 1) << ": ";
        cin >> payRate;
        employees[i].setHourlyPayRate(payRate);
    }

    cout << endl;
    cout << "Gross Pay for Each Employee:" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        double totalPay = employees[i].calculateTotalPay();
        cout << "Employee " << (i + 1) << ": $" << totalPay << endl;
    }

    return 0;
}