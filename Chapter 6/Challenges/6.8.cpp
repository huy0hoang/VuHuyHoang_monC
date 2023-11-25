#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinToss() {
    int randomNum = rand() % 2 + 1;

    if (randomNum == 1) {
        cout << "Heads" << endl;
    }
    else {
        cout << "Tails" << endl;
    }
}

int main() {
    int numTosses;

    cout << "Enter the number of times the coin should be tossed: ";
    cin >> numTosses;

    // Set the seed for the random number generator
    srand(time(0));

    for (int i = 0; i < numTosses; i++) {
        cout << "Toss " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}