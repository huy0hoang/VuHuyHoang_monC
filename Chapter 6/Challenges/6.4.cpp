#include <iostream>
using namespace std;

// Function to get the number of accidents for a region
int getNumAccidents(const string& regionName) {
    int numAccidents;
    cout << "Enter the number of automobile accidents reported in " << regionName << " last year: ";
    cin >> numAccidents;

    while (numAccidents < 0) {
        cout << "Invalid number of accidents. Please enter a non-negative value: ";
        cin >> numAccidents;
    }

    return numAccidents;
}

// Function to find the region with the fewest accidents and print its name and accident figure
void findLowest(int northAccidents, int southAccidents, int eastAccidents, int westAccidents, int centralAccidents) {
    int lowestAccidents = northAccidents;
    string regionName = "North";

    if (southAccidents < lowestAccidents) {
        lowestAccidents = southAccidents;
        regionName = "South";
    }

    if (eastAccidents < lowestAccidents) {
        lowestAccidents = eastAccidents;
        regionName = "East";
    }

    if (westAccidents < lowestAccidents) {
        lowestAccidents = westAccidents;
        regionName = "West";
    }

    if (centralAccidents < lowestAccidents) {
        lowestAccidents = centralAccidents;
        regionName = "Central";
    }

    cout << "The region with the fewest accidents is " << regionName << " with " << lowestAccidents << " accidents." << endl;
}

int main() {
    int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;

    // Get the number of accidents for each region
    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");

    // Find the region with the fewest accidents
    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}