#include <iostream>

using namespace std;

int main() {
    int sideLength;

    cout << "Enter a positive integer no greater than 15: ";
    cin >> sideLength;

    // Validate the input
    if (sideLength <= 0 || sideLength > 15) {
        cout << "Invalid input. Please enter a positive integer no greater than 15." << endl;
        return 0;
    }

    for (int row = 0; row < sideLength; ++row) {
        for (int col = 0; col < sideLength; ++col) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}