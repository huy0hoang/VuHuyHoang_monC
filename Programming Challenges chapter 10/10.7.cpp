#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, middleName, lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your middle name: ";
    getline(cin, middleName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    string arrangedName = lastName + ", " + firstName + " " + middleName;

    cout << "Arranged name: " << arrangedName << endl;

    return 0;
}