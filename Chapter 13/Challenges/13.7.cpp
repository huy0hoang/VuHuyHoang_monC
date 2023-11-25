#include <iostream>

using namespace std;

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    TestScores() {
        score1 = 0.0;
        score2 = 0.0;
        score3 = 0.0;
    }

    void setScore1(double s) {
        score1 = s;
    }

    double getScore1() const {
        return score1;
    }

    void setScore2(double s) {
        score2 = s;
    }

    double getScore2() const {
        return score2;
    }

    void setScore3(double s) {
        score3 = s;
    }

    double getScore3() const {
        return score3;
    }

    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    TestScores scores;

    double score1, score2, score3;

    cout << "Enter test score 1: ";
    cin >> score1;
    scores.setScore1(score1);

    cout << "Enter test score 2: ";
    cin >> score2;
    scores.setScore2(score2);

    cout << "Enter test score 3: ";
    cin >> score3;
    scores.setScore3(score3);

    cout << "Average test score: " << scores.calculateAverage() << endl;

    return 0;
}