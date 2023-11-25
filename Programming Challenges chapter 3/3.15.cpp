#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double ASSESSMENT_PERCENTAGE = 0.6;
    const double TAX_RATE = 0.0075;

    double actualValue;

    // Get input from the user
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate the assessment value and property tax
    double assessmentValue = actualValue * ASSESSMENT_PERCENTAGE;
    double propertyTax = assessmentValue / 100 * TAX_RATE;

    // Display the assessment value and property tax
    cout << fixed << setprecision(2);
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}