#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ofstream outputFile("prime_numbers.txt");

    if (!outputFile) {
        cout << "Failed to create the file." << endl;
        return 1;
    }

    for (int number = 1; number <= 100; number++) {
        if (isPrime(number)) {
            outputFile << number << endl;
        }
    }

    outputFile.close();

    cout << "Prime numbers from 1 to 100 have been stored in 'prime_numbers.txt'." << endl;

    return 0;
}