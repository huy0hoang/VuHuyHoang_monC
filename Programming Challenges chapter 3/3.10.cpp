#include <iostream>
using namespace std;

int main() {
    double replacementCost;

    // Get input from the user
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum amount of insurance coverage
    double minimumInsurance = 0.8 * replacementCost;

    // Display the minimum amount of insurance coverage
    cout << "Minimum amount of insurance coverage: $" << minimumInsurance << endl;

    return 0;
}