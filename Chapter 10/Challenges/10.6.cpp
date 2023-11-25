#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int countVowels(const char* str) {
    int vowelCount = 0;

    while (*str) {
        char ch = tolower(*str);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }

        str++;
    }

    return vowelCount;
}

int countConsonants(const char* str) {
    int consonantCount = 0;

    while (*str) {
        char ch = tolower(*str);

        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            consonantCount++;
        }

        str++;
    }

    return consonantCount;
}

int main() {
    char input[100];

    while (true) {
        cout << "Enter a string (or 'E' to exit): ";
        cin.getline(input, sizeof(input));

        if (strcmp(input, "E") == 0 || strcmp(input, "e") == 0) {
            break;
        }

        cout << "Menu:" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program" << endl;

        char choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (toupper(choice)) {
        case 'A': {
            int vowelCount = countVowels(input);
            cout << "Number of vowels: " << vowelCount << endl;
            break;
        }
        case 'B': {
            int consonantCount = countConsonants(input);
            cout << "Number of consonants: " << consonantCount << endl;
            break;
        }
        case 'C': {
            int vowelCount = countVowels(input);
            int consonantCount = countConsonants(input);
            cout << "Number of vowels: " << vowelCount << endl;
            cout << "Number of consonants: " << consonantCount << endl;
            break;
        }
        case 'D':
            continue;
        case 'E':
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        if (toupper(choice) == 'E') {
            break;
        }

        cout << endl;
    }

    return 0;
}