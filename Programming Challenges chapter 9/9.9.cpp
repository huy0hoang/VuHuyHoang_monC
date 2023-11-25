#include <iostream>

using namespace std;

double findMedian(const int* arr, int size) {
    if (size == 0) {
        return 0; // Empty array, return 0
    }

    int midIndex = size / 2;
    double median;

    if (size % 2 == 0) {
        // Even number of elements, average the two middle values
        median = static_cast<double>(arr[midIndex - 1] + arr[midIndex]) / 2.0;
    }
    else {
        // Odd number of elements, middle value is the median
        median = arr[midIndex];
    }

    return median;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, size);

    cout << "Median: " << median << endl;

    return 0;
}