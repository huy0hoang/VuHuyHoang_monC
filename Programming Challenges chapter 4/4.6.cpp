#include <iostream>
using namespace std;

int main() {
    // Ask the user for the object's mass in kilograms
    double mass;
    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    // Calculate the object's weight in newtons
    double weight = mass * 9.8;

    // Display the weight
    cout << "Weight: " << weight << " newtons" << endl;

    // Check if the object is too heavy or too light
    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    }
    else if (weight < 10) {
        cout << "The object is too light." << endl;
    }

    return 0;
}