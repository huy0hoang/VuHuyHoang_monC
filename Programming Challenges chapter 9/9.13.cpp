#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
#include <vector>

using namespace std;

double calculateAverage(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

double calculateMedian(const int* arr, int size) {
    int* sortedArr = new int[size];
    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                int temp = sortedArr[j];
                sortedArr[j] = sortedArr[j + 1];
                sortedArr[j + 1] = temp;
            }
        }
    }

    double median;
    if (size % 2 == 0) {
        median = static_cast<double>(sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2;
    }
    else {
        median = static_cast<double>(sortedArr[size / 2]);
    }

    delete[] sortedArr;

    return median;
}

vector<int> calculateMode(const int* arr, int size) {
    map<int, int> frequencyMap;
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    vector<int> modeValues;
    int maxFrequency = 0;
    for (const auto& pair : frequencyMap) {
        int frequency = pair.second;
        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            modeValues = { pair.first };
        }
        else if (frequency == maxFrequency) {
            modeValues.push_back(pair.first);
        }
    }

    return modeValues;
}

int main() {
    int numStudents;
    cout << "Enter the number of students surveyed: ";
    cin >> numStudents;

    while (numStudents <= 0) {
        cout << "Invalid input. Enter a positive number: ";
        cin >> numStudents;
    }

    int* moviesSeen = new int[numStudents];

    cout << "Enter the number of movies each student saw:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> moviesSeen[i];

        while (moviesSeen[i] < 0) {
            cout << "Invalid input. Enter a non-negative number: ";
            cin >> moviesSeen[i];
        }
    }

    double average = calculateAverage(moviesSeen, numStudents);
    double median = calculateMedian(moviesSeen, numStudents);
    vector<int> mode = calculateMode(moviesSeen, numStudents);

    cout << fixed << setprecision(2);
    cout << "\n--- Movie Statistics ---\n";
    cout << "Average: " << average << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: ";
    for (int i = 0; i < mode.size(); i++) {
        cout << mode[i];
        if (i < mode.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    delete[] moviesSeen;

    return 0;
}