#include <iostream>
#include <cmath>
using namespace std;

double kineticEnergy(double mass, double velocity) {
    double kineticEnergy = 0.5 * mass * pow(velocity, 2);
    return kineticEnergy;
}

int main() {
    double mass, velocity;

    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;

    cout << "Enter the velocity of the object (in meters per second): ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);
    cout << "The kinetic energy of the object is: " << energy << " Joules" << endl;

    return 0;
}