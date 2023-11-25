#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    ifstream inputFile("Random.txt");
    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 0;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    double average = static_cast<double>(sum) / count;

    cout << "Number of numbers: " << count << endl;
    cout << "Sum of numbers: " << sum << endl;
    cout << "Average of numbers: " << average << endl;

    return 0;
}