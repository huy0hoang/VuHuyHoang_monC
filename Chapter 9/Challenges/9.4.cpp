#include <iostream>
#include <algorithm> // For sort function

using namespace std;

// Function to sort the array in ascending order
void sortScores(int* scores, string* names, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = 0; j < numScores - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores
                swap(scores[j], scores[j + 1]);

                // Swap names
                swap(names[j], names[j + 1]);
            }
        }
    }
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

    // Check if the number of scores is valid
    if (numScores <= 0) {
        cout << "Invalid number of test scores." << endl;
        return 1; // Exit the program with an error status
    }

    // Dynamically allocate arrays to hold the test scores and names
    int* scores = new int[numScores];
    string* names = new string[numScores];

    // Get the name-score pairs from the user
    for (int i = 0; i < numScores; i++) {
        cout << "Enter student name #" << (i + 1) << ": ";
        cin >> names[i];

        cout << "Enter test score #" << (i + 1) << ": ";
        cin >> scores[i];

        // Input validation: Check for negative scores
        if (scores[i] < 0) {
            cout << "Invalid test score. Negative scores are not allowed." << endl;
            delete[] scores; // Free the dynamically allocated memory
            delete[] names;  // Free the dynamically allocated memory
            return 1; // Exit the program with an error status
        }
    }

    // Sort the test scores and names
    sortScores(scores, names, numScores);

    // Calculate the average score
    double average = calculateAverage(scores, numScores);

    // Display the sorted list of scores with names
    cout << "Sorted list of scores with names:" << endl;
    for (int i = 0; i < numScores; i++) {
        cout << names[i] << ": " << scores[i] << endl;
    }

    // Display the average score
    cout << "Average score: " << average << endl;

    // Free the dynamically allocated memory
    delete[] scores;
    delete[] names;

    return 0;
}