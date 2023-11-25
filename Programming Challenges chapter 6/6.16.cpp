#include <iostream>
using namespace std;

double calculatePopulationSize(double previousPopulation, double birthRate, double deathRate) {
    double populationSize = previousPopulation + (previousPopulation * birthRate) - (previousPopulation * deathRate);
    return populationSize;
}

int main() {
    double startingSize;
    double birthRate;
    double deathRate;
    int numYears;

    do {
        cout << "Enter the starting size of the population: ";
        cin >> startingSize;

        if (startingSize < 2) {
            cout << "Invalid starting size. Please enter a number greater than or equal to 2." << endl;
        }
    } while (startingSize < 2);

    do {
        cout << "Enter the annual birth rate (as a decimal): ";
        cin >> birthRate;

        if (birthRate < 0) {
            cout << "Invalid birth rate. Please enter a non-negative number." << endl;
        }
    } while (birthRate < 0);

    do {
        cout << "Enter the annual death rate (as a decimal): ";
        cin >> deathRate;

        if (deathRate < 0) {
            cout << "Invalid death rate. Please enter a non-negative number." << endl;
        }
    } while (deathRate < 0);

    do {
        cout << "Enter the number of years to display: ";
        cin >> numYears;

        if (numYears < 1) {
            cout << "Invalid number of years. Please enter a number greater than or equal to 1." << endl;
        }
    } while (numYears < 1);

    cout << "Year\tPopulation Size" << endl;
    cout << "----------------------" << endl;

    double populationSize = startingSize;
    for (int year = 1; year <= numYears; year++) {
        cout << year << "\t" << populationSize << endl;
        populationSize = calculatePopulationSize(populationSize, birthRate, deathRate);
    }

    return 0;
}