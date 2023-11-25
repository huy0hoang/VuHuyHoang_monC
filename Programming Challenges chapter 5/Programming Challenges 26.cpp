#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("Report.txt");
    if (!outputFile) {
        cout << "Error creating the file." << endl;
        return 0;
    }

    double balance;
    double annualInterestRate;
    int numMonths;

    cout << "Enter the starting balance: ";
    cin >> balance;
    cout << "Enter the annual interest rate (in percent): ";
    cin >> annualInterestRate;
    cout << "Enter the number of months: ";
    cin >> numMonths;

    double monthlyInterestRate = annualInterestRate / 12 / 100;

    for (int month = 1; month <= numMonths; ++month) {
        double interest = balance * monthlyInterestRate;
        balance += interest;
        outputFile << "Month " << month << ": " << balance << endl;
    }

    outputFile.close();

    cout << "Final report has been written to Report.txt." << endl;

    return 0;
}