#include <iostream>
#include <string>

using namespace std;

const int NUM_SPEAKERS = 10;

struct Speaker {
    string name;
    string phoneNumber;
    string topic;
    double feeRequired;
};

void inputData(Speaker speakers[]) {
    for (int i = 0; i < NUM_SPEAKERS; ++i) {
        cout << "Enter details for Speaker " << i + 1 << ":" << endl;

        cout << "Speaker's Name: ";
        cin.ignore();
        getline(cin, speakers[i].name);

        cout << "Speaker's Telephone Number: ";
        getline(cin, speakers[i].phoneNumber);

        cout << "Speaking Topic: ";
        getline(cin, speakers[i].topic);

        cout << "Fee Required: $";
        cin >> speakers[i].feeRequired;

        // Input validation: Validate fee required
        if (speakers[i].feeRequired < 0) {
            cout << "Invalid input. Speaker's fee cannot be negative." << endl;
            exit(1);
        }

        cout << endl;
    }
}

void displaySpeakers(const Speaker speakers[]) {
    cout << "Speakers' Bureau Data:" << endl;
    cout << "-----------------------" << endl;

    for (int i = 0; i < NUM_SPEAKERS; ++i) {
        cout << "Speaker " << i + 1 << ":" << endl;
        cout << "Name: " << speakers[i].name << endl;
        cout << "Telephone Number: " << speakers[i].phoneNumber << endl;
        cout << "Speaking Topic: " << speakers[i].topic << endl;
        cout << "Fee Required: $" << speakers[i].feeRequired << endl;
        cout << endl;
    }
}

int main() {
    Speaker speakers[NUM_SPEAKERS];

    inputData(speakers);

    displaySpeakers(speakers);

    return 0;
}