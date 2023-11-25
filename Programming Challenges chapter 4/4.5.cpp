#include <iostream>
using namespace std;

int main() {
    // Ask the user for weight in pounds
    double weight;
    cout << "Enter weight in pounds: ";
    cin >> weight;

    // Ask the user for height in inches
    double height;
    cout << "Enter height in inches: ";
    cin >> height;

    // Calculate BMI
    double bmi = (weight * 703) / (height * height);

    // Display BMI
    cout << "BMI: " << bmi << endl;

    // Determine weight status
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 25) {
        cout << "Optimal weight" << endl;
    }
    else {
        cout << "Overweight" << endl;
    }

    return 0;
}