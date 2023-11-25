#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for speed of sound in different mediums
    const double SPEED_AIR = 1100.0;   // feet per second
    const double SPEED_WATER = 4900.0; // feet per second
    const double SPEED_STEEL = 16400.0;// feet per second

    // Variables for menu selection and distance
    int choice;
    double distance;

    // Display the menu
    cout << "Select a medium:" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Validate the menu choice
    if (choice < 1 || choice > 3) {
        cout << "Invalid choice. Please select a valid option." << endl;
        return 0;
    }

    // Ask for the distance
    cout << "Enter the distance the sound wave will travel (in feet): ";
    cin >> distance;

    // Validate the distance
    if (distance < 0) {
        cout << "Invalid distance. Distance cannot be less than 0." << endl;
        return 0;
    }

    // Calculate the time based on the selected medium
    double time;
    switch (choice) {
    case 1: // Air
        time = distance / SPEED_AIR;
        break;
    case 2: // Water
        time = distance / SPEED_WATER;
        break;
    case 3: // Steel
        time = distance / SPEED_STEEL;
        break;
    }

    // Display the time rounded to four decimal places
    cout << "The time it will take for the sound wave to travel the given distance in the selected medium is: ";
    cout << fixed << setprecision(4) << time << " seconds" << endl;

    return 0;
}