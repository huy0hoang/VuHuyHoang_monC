#include <iostream>
#include <iomanip>
using namespace std;

double calculateCallCharges(double startTime, int minutes) {
    double rate;
    if (startTime >= 0.00 && startTime <= 6.59) {
        rate = 0.05;
    }
    else if (startTime >= 7.00 && startTime <= 19.00) {
        rate = 0.45;
    }
    else if (startTime >= 19.01 && startTime <= 23.59) {
        rate = 0.20;
    }
    else {
        return -1; // Invalid start time
    }

    return rate * minutes;
}

int main() {
    double startTime;
    int minutes;

    cout << "Enter the starting time of the call (in HH.MM format): ";
    cin >> startTime;

    int hours = static_cast<int>(startTime);
    int minutesPart = static_cast<int>((startTime - hours) * 100);

    if (hours < 0 || hours > 23 || minutesPart > 59) {
        cout << "Invalid time entered." << endl;
        return 0;
    }

    cout << "Enter the number of minutes of the call: ";
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid number of minutes entered." << endl;
        return 0;
    }

    double charges = calculateCallCharges(startTime, minutes);

    if (charges == -1) {
        cout << "Invalid start time entered." << endl;
    }
    else {
        cout << "The charges for the call are: $" << fixed << setprecision(2) << charges << endl;
    }

    return 0;
}