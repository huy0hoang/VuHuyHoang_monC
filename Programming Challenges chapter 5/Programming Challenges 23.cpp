#include <iostream>

using namespace std;

int main() {
    // Pattern A
    cout << "Pattern A:" << endl;
    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col <= row; ++col) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B
    cout << "Pattern B:" << endl;
    for (int row = 0; row < 10; ++row) {
        for (int col = row; col < 10; ++col) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}