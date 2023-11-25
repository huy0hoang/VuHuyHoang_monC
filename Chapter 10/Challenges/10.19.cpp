#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string convertToWords(int number) {
    string ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

    string words;

    if (number >= 1000) {
        words += ones[number / 1000] + " thousand ";
        number %= 1000;
    }

    if (number >= 100) {
        words += ones[number / 100] + " hundred ";
        number %= 100;
    }

    if (number >= 20) {
        words += tens[number / 10] + " ";
        number %= 10;
    }
    else if (number >= 10) {
        words += teens[number - 10] + " ";
        number = 0;
    }

    if (number > 0) {
        words += ones[number] + " ";
    }

    return words;
}

int main() {
    string date;
    string payee;
    double amount;

    // Get user input
    cout << "Enter the date: ";
    getline(cin, date);

    cout << "Pay to the Order of: ";
    getline(cin, payee);

    cout << "Enter the amount of the check: $";
    cin >> amount;

    // Input validation
    if (amount < 0 || amount > 10000) {
        cout << "Invalid amount. Please enter an amount between 0 and 10,000." << endl;
        return 0;
    }

    // Separate dollars and cents
    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    // Convert dollars to words
    string dollarsInWords = convertToWords(dollars);

    // Display the simulated check
    cout << "\nDate: " << date << endl;
    cout << "Pay to the Order of: " << payee << " $" << fixed << setprecision(2) << amount << endl;
    cout << dollarsInWords << "dollars and " << cents << " cents" << endl;

    return 0;
}