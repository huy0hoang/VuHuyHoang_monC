#include <iostream>
#include <string>

using namespace std;

int calculateSum(const string& input) {
    int sum = 0;

    for (char ch : input) {
        if (isdigit(ch)) {
            sum += ch - '0';
        }
    }

    return sum;
}

char findHighestDigit(const string& input) {
    char highestDigit = '\0';

    for (char ch : input) {
        if (isdigit(ch) && (highestDigit == '\0' || ch > highestDigit)) {
            highestDigit = ch;
        }
    }

    return highestDigit;
}

char findLowestDigit(const string& input) {
    char lowestDigit = '\0';

    for (char ch : input) {
        if (isdigit(ch) && (lowestDigit == '\0' || ch < lowestDigit)) {
            lowestDigit = ch;
        }
    }

    return lowestDigit;
}

int main() {
    string input;

    cout << "Enter a series of single-digit numbers: ";
    cin >> input;

    int sum = calculateSum(input);
    char highestDigit = findHighestDigit(input);
    char lowestDigit = findLowestDigit(input);

    cout << "Sum of single-digit numbers: " << sum << endl;
    cout << "Highest digit: " << highestDigit << endl;
    cout << "Lowest digit: " << lowestDigit << endl;

    return 0;
}