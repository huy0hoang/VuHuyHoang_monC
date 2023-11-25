#include <iostream>
using namespace std;

int main() {
    int numYears;

    do {
        cout << "Enter the number of years: ";
        cin >> numYears;

        if (numYears < 1) {
            cout << "Invalid number of years. Please enter a number greater than 0." << endl;
        }
    } while (numYears < 1);

    int totalMonths = numYears * 12;
    double totalRainfall = 0.0;

    for (int year = 1; year <= numYears; ++year) {
        for (int month = 1; month <= 12; ++month) {
            double rainfall;

            do {
                cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
                cin >> rainfall;

                if (rainfall < 0) {
                    cout << "Invalid rainfall value. Please enter a non-negative number." << endl;
                }
            } while (rainfall < 0);

            totalRainfall += rainfall;
        }
    }

    double averageRainfall = totalRainfall / totalMonths;

    cout << endl;
    cout << "Rainfall Summary" << endl;
    cout << "----------------" << endl;
    cout << "Number of Months: " << totalMonths << endl;
    cout << "Total Inches of Rainfall: " << totalRainfall << endl;
    cout << "Average Rainfall per Month: " << averageRainfall << " inches" << endl;

    return 0;
}