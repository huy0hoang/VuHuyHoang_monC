#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for speed of sound in different gases
    const double SPEED_CO2 = 258.0;   // meters per second
    const double SPEED_AIR = 331.5;   // meters per second
    const double SPEED_HELIUM = 972.0;// meters per second
    const double SPEED_HYDROGEN = 1270.0;// meters per second

    // Variables for menu selection and time
    int choice;
    double time;

    // Display the menu
    cout << "Select a gas:" << endl;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydrogen" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Validate the menu choice
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please select a valid option." << endl;
        return 0;
    }

    // Ask for the time
    cout << "Enter the time it took for the sound to travel (in seconds): ";
    cin >> time;

    // Validate the time
    if (time < 0 || time > 30) {
        cout << "Invalid time. Time must be between 0 and 30 seconds." << endl;
        return 0;
    }

    // Calculate the distance based on the selected gas
    double distance;
    switch (choice) {
    case 1: // Carbon Dioxide
        distance = SPEED_CO2 * time;
        break;
    case 2: // Air
        distance = SPEED_AIR * time;
        break;
    case 3: // Helium
        distance = SPEED_HELIUM * time;
        break;
    case 4: // Hydrogen
        distance = SPEED_HYDROGEN * time;
        break;
    }

    // Display the distance
    cout << "The distance between the sound source and detection location is: ";
    cout << fixed << setprecision(2) << distance << " meters" << endl;

    return 0;
}