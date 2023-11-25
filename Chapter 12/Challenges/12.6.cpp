#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void searchAndDisplayOccurrences(const string& filename, const string& searchString) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    int lineCount = 1;
    int occurrences = 0;

    while (getline(file, line)) {
        if (line.find(searchString) != string::npos) {
            cout << "Line " << lineCount << ": " << line << endl;
            occurrences++;
        }
        lineCount++;
    }

    cout << "Total occurrences: " << occurrences << endl;

    file.close();
}

int main() {
    string filename;
    string searchString;

    cout << "Enter the name of the file: ";
    cin >> filename;

    cout << "Enter the string to search for: ";
    cin >> searchString;

    searchAndDisplayOccurrences(filename, searchString);

    return 0;
}