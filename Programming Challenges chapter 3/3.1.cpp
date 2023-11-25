#include <iostream>
using namespace std;

int main() {
    double gallons;
    double miles;

    // Get input from the user
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons;
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles;

    // Calculate the miles per gallon
    double mpg = miles / gallons;

    // Display the result
    cout << "The car's gas mileage is " << mpg << " miles per gallon." << endl;

    return 0;
}