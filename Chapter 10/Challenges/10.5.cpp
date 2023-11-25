#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void capitalizeSentences(char* str) {
    bool capitalizeNext = true;

    for (int i = 0; i < strlen(str); i++) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = false;
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = true;
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH);

    capitalizeSentences(input);

    cout << "Modified string: " << input << endl;

    return 0;
}