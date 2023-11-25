#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int recipeCookies = 48;
    const double sugar = 1.5;
    const double butter = 1.0;
    const double flour = 2.75;

    int desiredCookies;

    // Get input from the user
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // Calculate the scaling factor
    double scalingFactor = static_cast<double>(desiredCookies) / recipeCookies;

    // Calculate the amount of ingredients needed
    double desiredSugar = sugar * scalingFactor;
    double desiredButter = butter * scalingFactor;
    double desiredFlour = flour * scalingFactor;

    // Display the results with two decimal places of precision
    cout << fixed << setprecision(2);
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << "Sugar: " << desiredSugar << " cups" << endl;
    cout << "Butter: " << desiredButter << " cups" << endl;
    cout << "Flour: " << desiredFlour << " cups" << endl;

    return 0;
}