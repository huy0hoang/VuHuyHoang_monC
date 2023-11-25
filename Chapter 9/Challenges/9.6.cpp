#include <iostream>
using namespace std;

int main() {
    int numDonations;

    cout << "Enter the number of donations: ";
    cin >> numDonations;

    // Dynamically allocate the donations array
    double* donations = new double[numDonations];

    // Get the donation values from the user
    cout << "Enter the donation values: " << endl;
    for (int i = 0; i < numDonations; i++) {
        cout << "Donation #" << (i + 1) << ": ";
        cin >> donations[i];
    }

    // Calculate the total donations
    double total = 0;
    for (int i = 0; i < numDonations; i++) {
        total += donations[i];
    }

    // Calculate the average donation
    double average = total / numDonations;

    // Count the number of donations above the average
    int aboveAverageCount = 0;
    for (int i = 0; i < numDonations; i++) {
        if (donations[i] > average) {
            aboveAverageCount++;
        }
    }

    // Display the results
    cout << "Total donations: $" << total << endl;
    cout << "Average donation: $" << average << endl;
    cout << "Donations above average: " << aboveAverageCount << endl;

    // Free the dynamically allocated memory
    delete[] donations;

    return 0;
}