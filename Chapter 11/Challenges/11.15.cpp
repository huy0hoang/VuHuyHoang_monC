#include <iostream>
#include <iomanip>

using namespace std;

struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

struct Salaried {
    double salary;
    double bonus;
};

union PayData {
    HourlyPaid hourlyPaid;
    Salaried salaried;
};

int main() {
    PayData payData;
    char workerType;

    cout << "Enter worker type (H for hourly paid, S for salaried): ";
    cin >> workerType;

    if (workerType == 'H' || workerType == 'h') {
        cout << "Enter hours worked: ";
        cin >> payData.hourlyPaid.hoursWorked;

        if (payData.hourlyPaid.hoursWorked < 0 || payData.hourlyPaid.hoursWorked > 80) {
            cout << "Invalid hours worked. Exiting program." << endl;
            return 1;
        }

        cout << "Enter hourly rate: ";
        cin >> payData.hourlyPaid.hourlyRate;

        if (payData.hourlyPaid.hourlyRate < 0) {
            cout << "Invalid hourly rate. Exiting program." << endl;
            return 1;
        }

        double pay = payData.hourlyPaid.hoursWorked * payData.hourlyPaid.hourlyRate;

        cout << "Pay: $" << fixed << setprecision(2) << pay << endl;
    }
    else if (workerType == 'S' || workerType == 's') {
        cout << "Enter salary: ";
        cin >> payData.salaried.salary;

        if (payData.salaried.salary < 0) {
            cout << "Invalid salary. Exiting program." << endl;
            return 1;
        }

        cout << "Enter bonus: ";
        cin >> payData.salaried.bonus;

        if (payData.salaried.bonus < 0) {
            cout << "Invalid bonus. Exiting program." << endl;
            return 1;
        }

        double pay = payData.salaried.salary + payData.salaried.bonus;

        cout << "Pay: $" << fixed << setprecision(2) << pay << endl;
    }
    else {
        cout << "Invalid worker type. Exiting program." << endl;
        return 1;
    }

    return 0;
}