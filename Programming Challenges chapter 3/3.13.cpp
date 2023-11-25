#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    double dollars;

    // Get input from the user
    cout << "Enter the amount in U.S. dollars: $";
    cin >> dollars;

    // Convert dollars to Japanese yen and euros
    double yen = dollars * YEN_PER_DOLLAR;
    double euros = dollars * EUROS_PER_DOLLAR;

    // Display the converted amounts with fixed-point notation and two decimal places
    cout << fixed << setprecision(2);
    cout << "Amount in Japanese yen: " << yen << " Yen" << endl;
    cout << "Amount in euros: " << euros << " Euros" << endl;

    return 0;
}