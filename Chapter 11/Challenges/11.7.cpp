#include <iostream>
#include <string>

using namespace std;

const int MAX_ACCOUNTS = 10;

struct CustomerAccount {
    string name;
    string address;
    string cityStateZip;
    string telephoneNumber;
    double accountBalance;
    string dateOfLastPayment;
};

void inputData(CustomerAccount accounts[], int& numAccounts) {
    if (numAccounts >= MAX_ACCOUNTS) {
        cout << "Maximum number of accounts reached." << endl;
        return;
    }

    cout << "Enter data for Account " << numAccounts + 1 << ":" << endl;

    cout << "Name: ";
    cin.ignore();
    getline(cin, accounts[numAccounts].name);

    cout << "Address: ";
    getline(cin, accounts[numAccounts].address);

    cout << "City, State, and ZIP: ";
    getline(cin, accounts[numAccounts].cityStateZip);

    cout << "Telephone Number: ";
    getline(cin, accounts[numAccounts].telephoneNumber);

    cout << "Account Balance: ";
    cin >> accounts[numAccounts].accountBalance;

    // Input validation: Validate account balance
    if (accounts[numAccounts].accountBalance < 0) {
        cout << "Invalid input. Account balance cannot be negative." << endl;
        exit(1);
    }

    cout << "Date of Last Payment: ";
    cin.ignore();
    getline(cin, accounts[numAccounts].dateOfLastPayment);

    numAccounts++;
    cout << "Account data entered successfully." << endl;
}

void displayData(const CustomerAccount accounts[], int numAccounts) {
    if (numAccounts == 0) {
        cout << "No accounts to display." << endl;
        return;
    }

    cout << "Customer Account Data:" << endl;
    cout << "----------------------" << endl;

    for (int i = 0; i < numAccounts; ++i) {
        cout << "Account " << i + 1 << ":" << endl;
        cout << "Name: " << accounts[i].name << endl;
        cout << "Address: " << accounts[i].address << endl;
        cout << "City, State, and ZIP: " << accounts[i].cityStateZip << endl;
        cout << "Telephone Number: " << accounts[i].telephoneNumber << endl;
        cout << "Account Balance: " << accounts[i].accountBalance << endl;
        cout << "Date of Last Payment: " << accounts[i].dateOfLastPayment << endl;
        cout << endl;
    }
}

void updateAccount(CustomerAccount accounts[], int numAccounts) {
    if (numAccounts == 0) {
        cout << "No accounts to update." << endl;
        return;
    }

    int accountNumber;
    cout << "Enter the account number you want to update (1-" << numAccounts << "): ";
    cin >> accountNumber;

    // Input validation: Validate account number
    if (accountNumber < 1 || accountNumber > numAccounts) {
        cout << "Invalid account number." << endl;
        return;
    }

    cout << "Enter new data for Account " << accountNumber << ":" << endl;

    cout << "Name: ";
    cin.ignore();
    getline(cin, accounts[accountNumber - 1].name);

    cout << "Address: ";
    getline(cin, accounts[accountNumber - 1].address);

    cout << "City, State, and ZIP: ";
    getline(cin, accounts[accountNumber - 1].cityStateZip);

    cout << "Telephone Number: ";
    getline(cin, accounts[accountNumber - 1].telephoneNumber);

    cout << "Account Balance: ";
    cin >> accounts[accountNumber - 1].accountBalance;

    // Input validation: Validate account balance
    if (accounts[accountNumber - 1].accountBalance < 0) {
        cout << "Invalid input. Account balance cannot be negative." << endl;
        exit(1);
    }

    cout << "Date of Last Payment: ";
    cin.ignore();
    getline(cin, accounts[accountNumber - 1].dateOfLastPayment);

    cout << "Account data updated successfully." << endl;
}

int main() {
    CustomerAccount accounts[MAX_ACCOUNTS];
    int numAccounts = 0;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Enter Account Data" << endl;
        cout << "2. Display Account Data" << endl;
        cout << "3. Update Account Data" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputData(accounts, numAccounts);
            break;
        case 2:
            displayData(accounts, numAccounts);
            break;
        case 3:
            updateAccount(accounts, numAccounts);
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}