#include <iostream>
using namespace std;

int main() {
    // Constants for weight and distance limits
    const double MAX_WEIGHT = 20.0; // Maximum weight in kilograms
    const int MIN_DISTANCE = 10; // Minimum distance in miles
    const int MAX_DISTANCE = 3000; // Maximum distance in miles

    // Rates per 500 miles shipped
    const double RATE_2KG_OR_LESS = 1.10;
    const double RATE_OVER_2KG_6KG = 2.20;
    const double RATE_OVER_6KG_10KG = 3.70;
    const double RATE_OVER_10KG_20KG = 4.80;

    // Ask for the weight of the package
    double weight;
    cout << "Enter the weight of the package (in kilograms): ";
    cin >> weight;

    // Validate the weight input
    if (weight <= 0 || weight > MAX_WEIGHT) {
        cout << "Invalid input. The weight of the package must be greater than 0 and not exceed 20 kilograms." << endl;
        return 0;
    }

    // Ask for the distance to be shipped
    int distance;
    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    // Validate the distance input
    if (distance < MIN_DISTANCE || distance > MAX_DISTANCE) {
        cout << "Invalid input. The distance to be shipped must be between 10 and 3000 miles." << endl;
        return 0;
    }

    // Calculate the charges based on the weight and distance
    double charges;
    if (weight <= 2.0) {
        charges = (distance / 500.0) * RATE_2KG_OR_LESS;
    }
    else if (weight <= 6.0) {
        charges = (distance / 500.0) * RATE_OVER_2KG_6KG;
    }
    else if (weight <= 10.0) {
        charges = (distance / 500.0) * RATE_OVER_6KG_10KG;
    }
    else {
        charges = (distance / 500.0) * RATE_OVER_10KG_20KG;
    }

    // Display the charges
    cout << "Shipping charges: $" << charges << endl;

    return 0;
}