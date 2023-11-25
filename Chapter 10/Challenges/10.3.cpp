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

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter a sentence: ";
    cin.getline(input, MAX_LENGTH);

    int wordCount = countWords(input);

    cout << "Number of words: " << wordCount << endl;

    return 0;
}