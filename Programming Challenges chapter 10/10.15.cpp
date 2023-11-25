#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream inputFile("text.txt");
    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    while (inputFile.get(ch)) {
        if (isupper(ch)) {
            uppercaseCount++;
        }
        else if (islower(ch)) {
            lowercaseCount++;
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
    }

    inputFile.close();

    cout << "Number of uppercase letters: " << uppercaseCount << endl;
    cout << "Number of lowercase letters: " << lowercaseCount << endl;
    cout << "Number of digits: " << digitCount << endl;

    return 0;
}