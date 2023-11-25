#include <iostream>
#include <vector>
using namespace std;

struct Substance {
    string name;
    int freezingPoint;
    int boilingPoint;
};

int main() {
    // Create a vector of Substance objects
    vector<Substance> substances = {
        {"Ethyl alcohol", -173, 172},
        {"Mercury", -38, 676},
        {"Oxygen", -362, -306},
        {"Water", 32, 212}
    };

    // Variable for temperature input
    int temperature;

    // Ask for the temperature
    cout << "Enter a temperature: ";
    cin >> temperature;

    // Check substances that will freeze at the given temperature
    cout << "Substances that will freeze at " << temperature << " degrees Fahrenheit: ";
    bool foundFreezingSubstances = false;
    for (const Substance& substance : substances) {
        if (substance.freezingPoint <= temperature) {
            cout << substance.name << ", ";
            foundFreezingSubstances = true;
        }
    }
    if (!foundFreezingSubstances) {
        cout << "None";
    }
    cout << endl;

    // Check substances that will boil at the given temperature
    cout << "Substances that will boil at " << temperature << " degrees Fahrenheit: ";
    bool foundBoilingSubstances = false;
    for (const Substance& substance : substances) {
        if (substance.boilingPoint >= temperature) {
            cout << substance.name << ", ";
            foundBoilingSubstances = true;
        }
    }
    if (!foundBoilingSubstances) {
        cout << "None";
    }
    cout << endl;

    return 0;
}