#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate computer's choice (1 - Rock, 2 - Paper, 3 - Scissors)
int generateComputerChoice() {
    srand(time(0));
    return rand() % 3 + 1;
}

// Function to determine the winner
string determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie! Play again.";
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)) {
        return "You win!";
    }
    else {
        return "Computer wins!";
    }
}

// Function to display the choices
void displayChoices(int userChoice, int computerChoice) {
    string userChoiceStr, computerChoiceStr;

    if (userChoice == 1) {
        userChoiceStr = "Rock";
    }
    else if (userChoice == 2) {
        userChoiceStr = "Paper";
    }
    else {
        userChoiceStr = "Scissors";
    }

    if (computerChoice == 1) {
        computerChoiceStr = "Rock";
    }
    else if (computerChoice == 2) {
        computerChoiceStr = "Paper";
    }
    else {
        computerChoiceStr = "Scissors";
    }

    cout << "Your choice: " << userChoiceStr << endl;
    cout << "Computer's choice: " << computerChoiceStr << endl;
}

int main() {
    int userChoice;

    cout << "Let's play Rock, Paper, Scissors!" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    int computerChoice = generateComputerChoice();

    displayChoices(userChoice, computerChoice);

    string result = determineWinner(userChoice, computerChoice);
    cout << result << endl;

    return 0;
}