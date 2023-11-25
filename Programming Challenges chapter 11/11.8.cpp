#include <iostream>
#include <string>

using namespace std;

const int MAX_CUSTOMERS = 100;

struct Customer {
    string name;
    string address;
    string city;
    string state;
    string zip;
};

void displayCustomer(const Customer& customer) {
    cout << "Name: " << customer.name << endl;
    cout << "Address: " << customer.address << endl;
    cout << "City: " << customer.city << endl;
    cout << "State: " << customer.state << endl;
    cout << "ZIP: " << customer.zip << endl;
    cout << endl;
}

void searchCustomer(const Customer customers[], int numCustomers, const string& searchName) {
    bool found = false;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].name.find(searchName) != string::npos) {
            displayCustomer(customers[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "No accounts match the search criteria." << endl;
    }
}

int main() {
    Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;
    string searchName;

    // Code to populate the customers array with data

    cout << "Enter part of the customer's name to search: ";
    getline(cin, searchName);

    searchCustomer(customers, numCustomers, searchName);

    return 0;
}