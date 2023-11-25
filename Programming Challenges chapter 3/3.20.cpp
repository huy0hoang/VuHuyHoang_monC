#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    double diameter;

    // Get input from the user
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    // Calculate the radius and area of the pizza
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    // Calculate the number of slices
    double numSlices = area / SLICE_AREA;

    // Display the number of slices
    cout << fixed << setprecision(1);
    cout << "The pizza can be divided into " << numSlices << " slices." << endl;

    return 0;
}