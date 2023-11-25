#include <iostream>
using namespace std;

const int NUM_SCORES = 5;

void getScore(int& score) {
    do {
        cout << "Enter a test score (0-100): ";
        cin >> score;

        if (score < 0 || score > 100) {
            cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
    } while (score < 0 || score > 100);
}

int findLowest(int scores[]) {
    int lowest = scores[0];

    for (int i = 1; i < NUM_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    return lowest;
}

void calcAverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;
    int count = 0;

    for (int i = 0; i < NUM_SCORES; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
            count++;
        }
    }

    double average = static_cast<double>(sum) / count;
    cout << "The average of the four highest scores is: " << average << endl;
}

int main() {
    int scores[NUM_SCORES];

    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}