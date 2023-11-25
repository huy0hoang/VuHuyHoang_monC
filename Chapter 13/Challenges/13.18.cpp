#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die {
private:
    int sides;
    int value;

public:
    Die(int numSides) {
        sides = numSides;
        value = 1;
    }

    void roll() {
        value = rand() % sides + 1;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    srand(time(0));

    Die die1(6);
    Die die2(6);

    int computerTotal = 0;
    int playerTotal = 0;

    char rollAgain;
    cout << "Welcome to the game of 21!" << endl;

    do {
        cout << "Computer is rolling the dice..." << endl;
        die1.roll();
        die2.roll();
        computerTotal += die1.getValue() + die2.getValue();

        cout << "Player's turn. Roll the dice? (y/n): ";
        cin >> rollAgain;

        if (rollAgain == 'y') {
            die1.roll();
            die2.roll();
            playerTotal += die1.getValue() + die2.getValue();
        }
    } while (rollAgain == 'y' && playerTotal <= 21);

    cout << "Computer's total: " << computerTotal << endl;
    cout << "Player's total: " << playerTotal << endl;

    if (playerTotal > 21) {
        cout << "Player busts. Computer wins!" << endl;
    }
    else if (computerTotal > 21) {
        cout << "Computer busts. Player wins!" << endl;
    }
    else if (playerTotal > computerTotal) {
        cout << "Player wins!" << endl;
    }
    else if (playerTotal < computerTotal) {
        cout << "Computer wins!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}