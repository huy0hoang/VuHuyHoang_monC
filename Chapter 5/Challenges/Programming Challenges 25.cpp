#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 0;
    }

    vector<string> names;
    string name;

    while (getline(inputFile, name)) {
        names.push_back(name);
    }

    inputFile.close();

    cout << "The students in line are:" << endl;
    for (const auto& student : names) {
        cout << student << endl;
    }

    return 0;
}