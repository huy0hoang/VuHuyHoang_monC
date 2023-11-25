#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    if (!inputFile) {
        cout << "Failed to open the input file." << endl;
        return 1;
    }

    string years[] = { "1900", "1920", "1940", "1960", "1980", "2000" };
    int population;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    for (int i = 0; i < 6; i++) {
        inputFile >> population;
        cout << years[i] << " ";

        for (int j = 0; j < population / 1000; j++) {
            std::cout << "*";
        }

        cout << endl;
    }

    inputFile.close();
    return 0;
}