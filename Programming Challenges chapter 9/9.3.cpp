#include <iostream>
#include <algorithm> // For sort function

using namespace std;

// Function to sort the array in ascending order
void sortScores(int* scores, int numScores) {
    sort(scores, scores + numScores);
}

// Function to calculate the average score, dropping the lowest score
double calculateAverage(int* scores, int numScores) {
    double sum = 0;
    for (int i = 1; i < numScores; i++) {
        sum += scores[i];
    }
    return sum / (numScores - 1);
}

int main() {
    int numScores;

    // Get the number of test scores from the user
    cout << "Enter the number of test scores: ";
    cin >> numScores;

    // Check if the number of scores is at least 2
    if (numScores < 2) {
        cout << "At least two test scores are required." << endl;
        return 1; // Exit the program with an error status
    }

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

    // Calculate the average score, dropping the lowest score
    double average = calculateAverage(scores, numScores);

    // Display the sorted list of scores
    cout << "Sorted list of scores (dropping the lowest score):" << endl;
    for (int i = 1; i < numScores; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Display the average score
    cout << "Average score (dropping the lowest score): " << average << endl;

    // Free the dynamically allocated memory
    delete[] scores;

    return 0;
}