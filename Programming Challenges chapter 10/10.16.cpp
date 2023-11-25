#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convertToPigLatin(const string& word) {
    if (word.empty()) {
        return word;
    }

    string pigLatinWord = word.substr(1) + word[0] + "ay";
    return pigLatinWord;
}

string convertSentenceToPigLatin(const string& sentence) {
    stringstream ss(sentence);
    string word;
    string pigLatinSentence;

    while (ss >> word) {
        pigLatinSentence += convertToPigLatin(word) + " ";
    }

    return pigLatinSentence;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string pigLatinSentence = convertSentenceToPigLatin(sentence);

    cout << "Pig Latin: " << pigLatinSentence << endl;

    return 0;
}