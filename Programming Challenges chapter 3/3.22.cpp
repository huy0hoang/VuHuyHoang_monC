#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double angle;

    // Get input from the user
    cout << "Enter an angle in radians: ";
    cin >> angle;

    // Calculate the sine, cosine, and tangent of the angle
    double sine = sin(angle);
    double cosine = cos(angle);
    double tangent = tan(angle);

    // Display the results
    cout << fixed << setprecision(4);
    cout << "Sine: " << sine << endl;
    cout << "Cosine: " << cosine << endl;
    cout << "Tangent: " << tangent << endl;

    return 0;
}