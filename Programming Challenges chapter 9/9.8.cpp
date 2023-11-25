#include <iostream>
#include <unordered_map>

using namespace std;

int findMode(const int* arr, int size) {
    unordered_map<int, int> frequencyMap;

    // Count the frequency of each element in the array
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    int mode = -1;
    int maxFrequency = 0;

    // Find the element with the highest frequency (mode)
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > maxFrequency) {
            mode = it->first;
            maxFrequency = it->second;
        }
    }

    // Check if there is a mode in the array
    if (maxFrequency <= 1) {
        mode = -1;
    }

    return mode;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 4, 5, 5, 5, 6, 6, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = findMode(arr, size);

    if (mode != -1) {
        cout << "Mode: " << mode << endl;
    }
    else {
        cout << "No mode found." << endl;
    }

    return 0;
}