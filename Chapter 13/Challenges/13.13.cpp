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

    Coin quarter;
    Coin dime;
    Coin nickel;

    double balance = 0.0;

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        if (quarter.getSideUp() == "heads") {
            balance += 0.25;
        }

        if (dime.getSideUp() == "heads") {
            balance += 0.10;
        }

        if (nickel.getSideUp() == "heads") {
            balance += 0.05;
        }
    }

    cout << "Game over!" << endl;

    if (balance == 1.0) {
        cout << "Congratulations! You won the game!" << endl;
    }
    else {
        cout << "Sorry, you lost the game. Your balance exceeded $1." << endl;
    }

    return 0;
}