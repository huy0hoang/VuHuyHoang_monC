#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayFileWithLineNumbers(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    int lineCount = 1;

    while (getline(file, line)) {
        cout << lineCount << ":" << line << endl;
        lineCount++;
    }

    file.close();
}

int main() {
    string filename;

    cout << "Enter the name of the file: ";
    cin >> filename;

    displayFileWithLineNumbers(filename);

    return 0;
}