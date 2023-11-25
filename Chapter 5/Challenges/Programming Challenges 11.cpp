#include <iostream>
using namespace std;

int main() {
    int startingSize;
    double dailyIncrease;
    int numDays;

    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startingSize;

        if (startingSize < 2) {
            cout << "Invalid starting size. Please enter a number greater than or equal to 2." << endl;
        }
    } while (startingSize < 2);

    do {
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIncrease;

        if (dailyIncrease < 0) {
            cout << "Invalid daily population increase. Please enter a non-negative number." << endl;
        }
    } while (dailyIncrease < 0);

    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> numDays;

        if (numDays < 1) {
            cout << "Invalid number of days. Please enter a number greater than or equal to 1." << endl;
        }
    } while (numDays < 1);

    cout << endl;
    cout << "Population Prediction" << endl;
    cout << "---------------------" << endl;

    double population = startingSize;

    for (int day = 1; day <= numDays; ++day) {
        cout << "Day " << day << ": " << population << " organisms" << endl;

        population += population * (dailyIncrease / 100.0);
    }

    return 0;
}