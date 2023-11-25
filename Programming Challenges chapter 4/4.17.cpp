#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Vault {
    string date;
    double height;
};

bool compareVaults(const Vault& vault1, const Vault& vault2) {
    return vault1.height > vault2.height;
}

int main() {
    // Variables for pole vaulter name and vaults
    string vaulterName;
    vector<Vault> vaults(3);

    // Ask for pole vaulter name
    cout << "Enter the name of the pole vaulter: ";
    getline(cin, vaulterName);

    // Ask for vault dates and heights
    for (int i = 0; i < 3; i++) {
        cout << "Enter the date of vault " << i + 1 << ": ";
        getline(cin, vaults[i].date);

        cout << "Enter the height (in meters) of vault " << i + 1 << ": ";
        cin >> vaults[i].height;
        cin.ignore();

        // Validate the height input
        if (vaults[i].height < 2.0 || vaults[i].height > 5.0) {
            cout << "Invalid input. The height must be between 2.0 and 5.0 meters." << endl;
            return 0;
        }
    }

    // Sort vaults in descending order of height
    sort(vaults.begin(), vaults.end(), compareVaults);

    // Display vaults in order of height
    cout << "Vaults for " << vaulterName << " (in order of height):" << endl;
    for (const Vault& vault : vaults) {
        cout << "Date: " << vault.date << ", Height: " << vault.height << " meters" << endl;
    }

    return 0;
}