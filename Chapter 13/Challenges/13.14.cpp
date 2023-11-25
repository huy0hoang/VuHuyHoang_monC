#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die {
private:
    int sides;
public:
    Die(int numSides) {
        sides = numSides;
    }

    int roll() const {
        return rand() % sides + 1;
    }
};

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    Die die(6);
    int fishingPoints = 0;
    bool continueFishing = true;

    while (continueFishing) {
        cout << "Do you want to continue fishing? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            continueFishing = false;
        }
        else {
            int item = die.roll();

            switch (item) {
            case 1:
                fishingPoints += 10; // A huge fish worth 10 points
                break;
            case 2:
                fishingPoints += 1; // An old shoe worth 1 point
                break;
            case 3:
                fishingPoints += 5; // A little fish worth 5 points
                break;
                // Add more cases for other items and their respective points
            default:
                break;
            }
        }
    }

    cout << "Total fishing points: " << fishingPoints << endl;

    if (fishingPoints >= 20) {
        cout << "Congratulations! You are a fishing champion!" << endl;
    }
    else if (fishingPoints >= 10) {
        cout << "Great job! You caught some good fish!" << endl;
    }
    else {
        cout << "Better luck next time. Keep practicing!" << endl;
    }

    return 0;
}