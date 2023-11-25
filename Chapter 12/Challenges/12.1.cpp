#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayFileHead(const string& filename, int numLines) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    int count = 0;

    while (getline(file, line) && count < numLines) {
        cout << line << endl;
        count++;
    }

    file.close();
}

int main() {
    string filename;
    int numLines = 10;

    cout << "Enter the name of the file: ";
    cin >> filename;

    displayFileHead(filename, numLines);

    return 0;
}