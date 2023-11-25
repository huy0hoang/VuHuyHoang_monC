#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decryptFile(const string& inputFile, const string& outputFile) {
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

    char character;
    while (inFile.get(character)) {
        character = character - 10;
        outFile.put(character);
    }

    cout << "File decrypted and saved to " << outputFile << endl;

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

    decryptFile(inputFile, outputFile);

    return 0;
}