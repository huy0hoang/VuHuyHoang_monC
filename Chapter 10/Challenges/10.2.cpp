#include <iostream>
#include <cstring>

using namespace std;

void displayBackward(const char* str) {
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH);

    displayBackward(input);

    return 0;
}