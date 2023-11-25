#include <iostream>
#include <cstring>

using namespace std;

int countCharacters(const char* str) {
    return strlen(str);
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH);

    int characterCount = countCharacters(input);

    cout << "Number of characters: " << characterCount << endl;

    return 0;
}