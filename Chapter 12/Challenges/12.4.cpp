#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void displayFileTail(const string& filename, int numLines) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    vector<string> lines;
    string line;

    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    int startLine = max(0, static_cast<int>(lines.size()) - numLines);

    for (int i = startLine; i < lines.size(); i++) {
        cout << lines[i] << endl;
    }
}

int main() {
    string filename;
    int numLines = 10;

    cout << "Enter the name of the file: ";
    cin >> filename;

    displayFileTail(filename, numLines);

    return 0;
}