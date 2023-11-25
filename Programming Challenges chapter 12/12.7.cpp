#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

void filterSentences(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    if (!inFile) {
        cout << "Error opening input file." << endl;
        return;
    }

    ofstream outFile(outputFile);
    if (!outFile) {
        cout << "Error opening output file." << endl;
        return;
    }

    string sentence;

    while (getline(inFile, sentence, '.')) {
        if (!sentence.empty()) {
            sentence[0] = toupper(sentence[0]);
            for (int i = 1; i < sentence.length(); i++) {
                sentence[i] = tolower(sentence[i]);
            }
            outFile << sentence << "." << endl;
        }
    }

    cout << "Sentences filtered and saved to the output file." << endl;

    inFile.close();
    outFile.close();
}

int main() {
    string inputFile;
    string outputFile;

    cout << "Enter the name of the input file: ";
    cin >> inputFile;

    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    filterSentences(inputFile, outputFile);

    return 0;
}