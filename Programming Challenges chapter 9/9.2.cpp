#include <iostream>
#include <algorithm> // For sort function

using namespace std;

// Function to sort the array in ascending order
void sortScores(int* scores, int numScores) {
    sort(scores, scores + numScores);
}

// Function to calculate the average score
double calculateAverage(int* scores, int numScores) {
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / numScores;
}

int main() {
    int numScores;

    // Get the number of test scores from the user
    cout << "Enter the number of test scores: ";
    cin >> numScores;

    // Dynamically allocate an array to hold the test scores
    int* scores = new int[numScores];

    // Get the test scores from the user
    for (int i = 0; i < numScores; i++) {
        cout << "Enter test score #" << (i + 1) << ": ";
        cin >> scores[i];

        // Input validation: Check for negative scores
        if (scores[i] < 0) {
            cout << "Invalid test score. Negative scores are not allowed." << endl;
            delete[] scores; // Free the dynamically allocated memory
            return 1; // Exit the program with an error status
        }
    }

    // Sort the test scores
    sortScores(scores, numScores);

    // Calculate the average score
    double average = calculateAverage(scores, numScores);

    // Display the sorted list of scores
    cout << "Sorted list of scores:" << endl;
    for (int i = 0; i < numScores; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Display the average score
    cout << "Average score: " << average << endl;

    // Free the dynamically allocated memory
    delete[] scores;

    return 0;
}