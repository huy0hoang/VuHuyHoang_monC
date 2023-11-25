#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coin {
private:
    string sideUp;

public:
    Coin() {
        toss(); // Randomly determine the initial side facing up
    }

    void toss() {
        // Generate a random number (0 or 1)
        int randomNum = rand() % 2;

        // Set the sideUp member variable based on the random number
        if (randomNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    Coin coin;
    int headsCount = 0;
    int tailsCount = 0;

    cout << "Initial side facing up: " << coin.getSideUp() << endl;

    for (int i = 0; i < 20; i++) {
        coin.toss();
        cout << "Side facing up after toss " << (i + 1) << ": " << coin.getSideUp() << endl;

        if (coin.getSideUp() == "heads") {
            headsCount++;
        }
        else {
            tailsCount++;
        }
    }

    cout << "Number of times heads is facing up: " << headsCount << endl;
    cout << "Number of times tails is facing up: " << tailsCount << endl;

    return 0;
}