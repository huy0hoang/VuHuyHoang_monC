#include <iostream>
#include <string>

using namespace std;

class Question {
private:
    string question;
    string answers[4];
    int correctAnswer;

public:
    Question(string q, string a1, string a2, string a3, string a4, int correct) {
        question = q;
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
        correctAnswer = correct;
    }

    string getQuestion() const {
        return question;
    }

    string getAnswer(int index) const {
        return answers[index];
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    Question triviaQuestions[10] = {
        Question("What is the capital of France?",
                 "London", "Paris", "Berlin", "Madrid", 2),
        Question("Who painted the Mona Lisa?",
                 "Pablo Picasso", "Vincent van Gogh", "Leonardo da Vinci", "Rembrandt", 3),
        Question("What is the largest planet in our solar system?",
                 "Venus", "Jupiter", "Mars", "Saturn", 2),
                 // Add more questions here
    };

    int player1Score = 0;
    int player2Score = 0;

    cout << "Welcome to the Trivia Game!" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Question " << (i + 1) << ": " << triviaQuestions[i].getQuestion() << endl;

        for (int j = 0; j < 4; j++) {
            cout << (j + 1) << ". " << triviaQuestions[i].getAnswer(j) << endl;
        }

        int player1Answer, player2Answer;
        cout << "Player 1, enter your answer (1-4): ";
        cin >> player1Answer;

        cout << "Player 2, enter your answer (1-4): ";
        cin >> player2Answer;

        if (player1Answer == triviaQuestions[i].getCorrectAnswer()) {
            player1Score++;
        }

        if (player2Answer == triviaQuestions[i].getCorrectAnswer()) {
            player2Score++;
        }

        cout << endl;
    }

    cout << "Player 1 score: " << player1Score << endl;
    cout << "Player 2 score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1Score < player2Score) {
        cout << "Player 2 wins!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}