#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    // Get input from the user
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rainfall (in inches) for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rainfall (in inches) for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rainfall (in inches) for " << month3 << ": ";
    cin >> rainfall3;

    // Calculate the average rainfall
    double average = (rainfall1 + rainfall2 + rainfall3) / 3;

    // Display the result with two decimal places of precision
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;

    return 0;

}