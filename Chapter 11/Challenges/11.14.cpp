#include <iostream>
#include <string>

using namespace std;

const int NUM_BINS = 10;
const int MAX_PARTS = 30;

struct Bin {
    string partDescription;
    int numParts;
};

void displayBins(const Bin bins[]) {
    cout << "Inventory Bins:" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Bin #" << setw(15) << "Part Description" << setw(10) << "Number of Parts" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 0; i < NUM_BINS; i++) {
        cout << setw(4) << i + 1 << setw(15) << bins[i].partDescription << setw(10) << bins[i].numParts << endl;
    }

    cout << endl;
}

void addParts(Bin& bin, int numToAdd) {
    if (bin.numParts + numToAdd > MAX_PARTS) {
        cout << "Error: Bin cannot hold more than " << MAX_PARTS << " parts." << endl;
    }
    else {
        bin.numParts += numToAdd;
        cout << numToAdd << " parts added to Bin." << endl;
    }
}

void removeParts(Bin& bin, int numToRemove) {
    if (bin.numParts - numToRemove < 0) {
        cout << "Error: Bin does not have enough parts." << endl;
    }
    else {
        bin.numParts -= numToRemove;
        cout << numToRemove << " parts removed from Bin." << endl;
    }
}

int main() {
    Bin bins[NUM_BINS] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}
    };

    int choice;
    int binIndex;
    int numParts;

    while (true) {
        displayBins(bins);

        cout << "Select a bin (1-" << NUM_BINS << ") or enter 0 to quit: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }
        else if (choice >= 1 && choice <= NUM_BINS) {
            binIndex = choice - 1;

            cout << "1. Add parts" << endl;
            cout << "2. Remove parts" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Enter the number of parts to add: ";
                cin >> numParts;
                addParts(bins[binIndex], numParts);
                break;
            case 2:
                cout << "Enter the number of parts to remove: ";
                cin >> numParts;
                removeParts(bins[binIndex], numParts);
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }
        else {
            cout << "Invalid bin selection." << endl;
        }

        cout << endl;
    }

    return 0;
}