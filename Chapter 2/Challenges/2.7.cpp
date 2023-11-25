#include <iostream>
using namespace std;

int main() {
    double currentLevel = 0.0;  // Current level of the ocean in millimeters
    double rateOfRise = 1.5;  // Rate of rise in millimeters per year

    // Calculate the projected increase in the ocean's level for 5 years
    double levelIn5Years = currentLevel + (rateOfRise * 5);

    // Calculate the projected increase in the ocean's level for 7 years
    double levelIn7Years = currentLevel + (rateOfRise * 7);

    // Calculate the projected increase in the ocean's level for 10 years
    double levelIn10Years = currentLevel + (rateOfRise * 10);

    cout << "After 5 years, the ocean's level will be " << levelIn5Years << " millimeters higher than the current level." << endl;
    cout << "After 7 years, the ocean's level will be " << levelIn7Years << " millimeters higher than the current level." << endl;
    cout << "After 10 years, the ocean's level will be " << levelIn10Years << " millimeters higher than the current level." << endl;

    return 0;
}