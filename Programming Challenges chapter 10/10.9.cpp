#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char mostFrequentCharacter(const string& str) {
    unordered_map<char, int> charCounts;

    // Count the occurrences of each character
    for (char ch : str) {
        charCounts[ch]++;
    }

    char mostFrequentChar = '\0';
    int maxCount = 0;

    // Find the character with the maximum count
    for (const auto& pair : charCounts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentChar = pair.first;
        }
    }

    return mostFrequentChar;
}

int main() {
    string str = "Hello, world!";

    char mostFrequentChar = mostFrequentCharacter(str);

    if (mostFrequentChar != '\0') {
        cout << "Most frequent character: " << mostFrequentChar << endl;
    }
    else {
        cout << "No characters found." << endl;
    }

    return 0;
}