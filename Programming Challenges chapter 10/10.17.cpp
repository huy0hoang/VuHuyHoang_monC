#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."},
    {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."},
    {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"},
    {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."},
    {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
    {' ', " "}
};

string convertToMorseCode(const string& text) {
    string morseCode;
    for (char c : text) {
        if (morseCodeMap.count(toupper(c)) > 0) {
            morseCode += morseCodeMap[toupper(c)] + " ";
        }
    }
    return morseCode;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string morseCode = convertToMorseCode(text);

    cout << "Morse Code: " << morseCode << endl;

    return 0;
}