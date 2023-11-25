#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void upper(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}

void lower(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

void reverse(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);

    reverse(str);
    lower(str);
    upper(str);

    cout << "Modified string: " << str << endl;

    return 0;
}