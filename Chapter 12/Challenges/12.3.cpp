#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayJoke(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening joke file." << endl;
        return;
    }

    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

void displayPunchLine(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening punch line file." << endl;
        return;
    }

    string line;
    string punchLine;

    while (getline(file, line)) {
        punchLine = line;
    }

    cout << "Punch Line: " << punchLine << endl;

    file.close();
}

int main() {
    string jokeFilename = "joke.txt";
    string punchLineFilename = "punchline.txt";

    displayJoke(jokeFilename);
    displayPunchLine(punchLineFilename);

    return 0;
}