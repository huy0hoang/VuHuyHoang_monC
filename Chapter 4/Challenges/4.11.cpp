#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Generate two random numbers
    srand(time(0));
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    // Display the addition problem
    cout << num1 << endl;
    cout << "  " << num2 << endl;

    // Get the student's answer
    int answer;
    cout << "Enter your answer: ";
    cin >> answer;

    // Check the student's answer
    int correctAnswer = num1 + num2;
    if (answer == correctAnswer) {
        cout << "Congratulations! Your answer is correct." << endl;
    }
    else {
        cout << "Sorry, your answer is incorrect." << endl;
        cout << "The correct answer is: " << correctAnswer << endl;
    }

    return 0;
}