#include <iostream>
#include <string>

using namespace std;

const int NUM_PLAYERS = 12;

struct SoccerPlayer {
    string name;
    int number;
    int pointsScored;
};

void inputData(SoccerPlayer players[]) {
    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << "Enter details for Player " << i + 1 << ":" << endl;

        cout << "Player's Name: ";
        cin.ignore();
        getline(cin, players[i].name);

        cout << "Player's Number: ";
        cin >> players[i].number;

        // Input validation: Validate player's number
        if (players[i].number < 0) {
            cout << "Invalid input. Player's number cannot be negative." << endl;
            exit(1);
        }

        cout << "Points Scored by Player: ";
        cin >> players[i].pointsScored;

        // Input validation: Validate points scored
        if (players[i].pointsScored < 0) {
            cout << "Invalid input. Points scored cannot be negative." << endl;
            exit(1);
        }

        cout << endl;
    }
}

void displayTable(const SoccerPlayer players[]) {
    cout << "Player\tNumber\tPoints Scored" << endl;
    cout << "-----------------------------------" << endl;

    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << players[i].name << "\t" << players[i].number << "\t" << players[i].pointsScored << endl;
    }

    cout << endl;
}

int calculateTotalPoints(const SoccerPlayer players[]) {
    int totalPoints = 0;

    for (int i = 0; i < NUM_PLAYERS; ++i) {
        totalPoints += players[i].pointsScored;
    }

    return totalPoints;
}

void displayMaxPointsPlayer(const SoccerPlayer players[]) {
    int maxPoints = players[0].pointsScored;
    int maxPointsIndex = 0;

    for (int i = 1; i < NUM_PLAYERS; ++i) {
        if (players[i].pointsScored > maxPoints) {
            maxPoints = players[i].pointsScored;
            maxPointsIndex = i;
        }
    }

    cout << "Player with the most points:" << endl;
    cout << "Name: " << players[maxPointsIndex].name << endl;
    cout << "Number: " << players[maxPointsIndex].number << endl;
    cout << "Points Scored: " << players[maxPointsIndex].pointsScored << endl;
}

int main() {
    SoccerPlayer players[NUM_PLAYERS];

    inputData(players);

    cout << "Soccer Player Data:" << endl;
    cout << "-------------------" << endl;

    displayTable(players);

    int totalPoints = calculateTotalPoints(players);
    cout << "Total Points Earned by the Team: " << totalPoints << endl;

    displayMaxPointsPlayer(players);

    return 0;
}