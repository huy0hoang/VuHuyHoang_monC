#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phoneNumber;
};

void displayContacts(const Contact contacts[], int size) {
    for (int i = 0; i < size; i++) {
        cout << contacts[i].name << ", " << contacts[i].phoneNumber << endl;
    }
}

void searchContacts(const Contact contacts[], int size, const string& searchTerm) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (contacts[i].name.find(searchTerm) != string::npos) {
            cout << contacts[i].name << ", " << contacts[i].phoneNumber << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No matching contacts found." << endl;
    }
}

int main() {
    const int SIZE = 11;
    Contact contacts[SIZE] = {
        { "Alejandra Cruz", "555-1223" },
        { "Joe Looney", "555-0097" },
        { "Geri Palmer", "555-8787" },
        { "Li Chen", "555-1212" },
        { "Holly Gaddis", "555-8878" },
        { "Sam Wiggins", "555-0998" },
        { "Bob Kain", "555-8712" },
        { "Tim Haynes", "555-7676" },
        { "Warren Gaddis", "555-9037" },
        { "Jean James", "555-4939" },
        { "Ron Palmer", "555-2783" }
    };

    string searchTerm;
    cout << "Enter a name or partial name to search for: ";
    getline(cin, searchTerm);

    searchContacts(contacts, SIZE, searchTerm);

    return 0;
}