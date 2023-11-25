#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayFileContents(const string& filename, int numLinesPerPage) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    int lineCount = 0;
    char ch;

    while (getline(file, line)) {
        cout << line << endl;
        lineCount++;

        if (lineCount % numLinesPerPage == 0) {
            cout << "Press Enter to continue...";
            cin.get(ch);
            if (ch == '\n')
                continue;
        }
    }

    file.close();
}

int main() {
    string filename;
    int numLinesPerPage = 24;

    cout << "Enter the name of the file: ";
    cin >> filename;

    displayFileContents(filename, numLinesPerPage);

    return 0;
}