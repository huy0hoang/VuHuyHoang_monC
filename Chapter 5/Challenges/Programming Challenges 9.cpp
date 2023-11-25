#include <iostream>
using namespace std;

int main() {
    int numFloors;
    const int MAX_FLOORS = 100;
    const int MAX_ROOMS = 100;

    do {
        cout << "Enter the number of floors in the hotel (excluding the 13th floor): ";
        cin >> numFloors;

        if (numFloors < 1 || numFloors > MAX_FLOORS) {
            cout << "Invalid number of floors. Please enter a number between 1 and " << MAX_FLOORS << "." << endl;
        }
    } while (numFloors < 1 || numFloors > MAX_FLOORS);

    int totalRooms = 0;
    int totalOccupied = 0;

    for (int floor = 1; floor <= numFloors; ++floor) {
        if (floor == 13) {
            continue; // Skip the 13th floor
        }

        int numRooms;
        do {
            cout << "Enter the number of rooms on floor " << floor << " (minimum 10): ";
            cin >> numRooms;

            if (numRooms < 10 || numRooms > MAX_ROOMS) {
                cout << "Invalid number of rooms. Please enter a number between 10 and " << MAX_ROOMS << "." << endl;
            }
        } while (numRooms < 10 || numRooms > MAX_ROOMS);

        int numOccupied;
        do {
            cout << "Enter the number of rooms occupied on floor " << floor << ": ";
            cin >> numOccupied;

            if (numOccupied < 0 || numOccupied > numRooms) {
                cout << "Invalid number of occupied rooms. Please enter a number between 0 and " << numRooms << "." << endl;
            }
        } while (numOccupied < 0 || numOccupied > numRooms);

        totalRooms += numRooms;
        totalOccupied += numOccupied;
    }

    int unoccupiedRooms = totalRooms - totalOccupied;
    double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;

    cout << endl;
    cout << "Hotel Information" << endl;
    cout << "-----------------" << endl;
    cout << "Total Rooms: " << totalRooms << endl;
    cout << "Occupied Rooms: " << totalOccupied << endl;
    cout << "Unoccupied Rooms: " << unoccupiedRooms << endl;
    cout << "Occupancy Rate: " << occupancyRate << "%" << endl;

    return 0;
}