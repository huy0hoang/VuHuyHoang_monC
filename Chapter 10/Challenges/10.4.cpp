#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int countWords(const char* str) {
    int wordCount = 0;
    bool inWord = false;

    while (*str) {
        if (isalpha(*str)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }

        str++;
    }

    return wordCount;
}

double calculateAverageLetters(const char* str) {
    int wordCount = 0;
    int letterCount = 0;
    bool inWord = false;

    while (*str) {
        if (isalpha(*str)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
            letterCount++;
        }
        else {
            inWord = false;
        }

        str++;
    }

    if (wordCount == 0) {
        return 0.0;
    }
    else {
        return static_cast<double>(letterCount) / wordCount;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter a sentence: ";
    cin.getline(input, MAX_LENGTH);

    int wordCount = countWords(input);
    double averageLetters = calculateAverageLetters(input);

    cout << "Number of words: " << wordCount << endl;
    cout << "Average number of letters per word: " << averageLetters << endl;

    return 0;
}