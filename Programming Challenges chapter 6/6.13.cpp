#include <iostream>
using namespace std;

int getNumEmployees() {
    int numEmployees;

    do {
        cout << "Enter the number of employees in the company: ";
        cin >> numEmployees;

        if (numEmployees < 1) {
            cout << "Invalid number of employees. Please enter a number greater than 0." << endl;
        }
    } while (numEmployees < 1);

    return numEmployees;
}

int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;

    for (int i = 1; i <= numEmployees; i++) {
        int daysMissed;
        do {
            cout << "Enter the number of days employee " << i << " missed during the past year: ";
            cin >> daysMissed;

            if (daysMissed < 0) {
                cout << "Invalid number of days. Please enter a non-negative number." << endl;
            }
        } while (daysMissed < 0);

        totalDaysAbsent += daysMissed;
    }

    return totalDaysAbsent;
}

double calcAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}

int main() {
    int numEmployees = getNumEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calcAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << "The average number of days employees are absent is: " << averageDaysAbsent << endl;

    return 0;
}