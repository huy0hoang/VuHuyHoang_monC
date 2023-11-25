#include <iostream>
using namespace std;

double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    double totalCharges = days * dailyRate + medicationCharges + serviceCharges;
    return totalCharges;
}

double calculateCharges(double medicationCharges, double serviceCharges) {
    double totalCharges = medicationCharges + serviceCharges;
    return totalCharges;
}

int main() {
    char patientType;
    int days;
    double dailyRate;
    double medicationCharges;
    double serviceCharges;

    cout << "Was the patient admitted as an in-patient or an out-patient? (I = In-patient, O = Out-patient): ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        do {
            cout << "Enter the number of days spent in the hospital: ";
            cin >> days;

            if (days < 0) {
                cout << "Invalid number of days. Please enter a non-negative number." << endl;
            }
        } while (days < 0);

        do {
            cout << "Enter the daily rate: $";
            cin >> dailyRate;

            if (dailyRate < 0) {
                cout << "Invalid daily rate. Please enter a non-negative number." << endl;
            }
        } while (dailyRate < 0);

        do {
            cout << "Enter the hospital medication charges: $";
            cin >> medicationCharges;

            if (medicationCharges < 0) {
                cout << "Invalid medication charges. Please enter a non-negative number." << endl;
            }
        } while (medicationCharges < 0);

        do {
            cout << "Enter the charges for hospital services: $";
            cin >> serviceCharges;

            if (serviceCharges < 0) {
                cout << "Invalid service charges. Please enter a non-negative number." << endl;
            }
        } while (serviceCharges < 0);

        double totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);
        cout << "Total charges for the in-patient: $" << totalCharges << endl;
    }
    else if (patientType == 'O' || patientType == 'o') {
        do {
            cout << "Enter the charges for hospital services: $";
            cin >> serviceCharges;

            if (serviceCharges < 0) {
                cout << "Invalid service charges. Please enter a non-negative number." << endl;
            }
        } while (serviceCharges < 0);

        do {
            cout << "Enter the hospital medication charges: $";
            cin >> medicationCharges;

            if (medicationCharges < 0) {
                cout << "Invalid medication charges. Please enter a non-negative number." << endl;
            }
        } while (medicationCharges < 0);

        double totalCharges = calculateCharges(medicationCharges, serviceCharges);
        cout << "Total charges for the out-patient: $" << totalCharges << endl;
    }
    else {
        cout << "Invalid patient type. Please enter 'I' for in-patient or 'O' for out-patient." << endl;
    }

    return 0;
}