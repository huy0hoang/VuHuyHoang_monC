#include <iostream>
#include <string>

using namespace std;

string separateWords(const string& sentence) {
    string separatedSentence;
    separatedSentence += sentence[0]; // Append the first character as uppercase

    for (int i = 1; i < sentence.length(); i++) {
        if (isupper(sentence[i])) {
            separatedSentence += ' '; // Append a space before an uppercase letter
        }
        separatedSentence += sentence[i]; // Append the current character
    }

    return separatedSentence;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string separatedSentence = separateWords(sentence);

    cout << "Separated sentence: " << separatedSentence << endl;

    return 0;
}