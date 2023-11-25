#include <iostream>

using namespace std;

int* expandArray(const int* arr, int size) {
    int* expandedArr = new int[size * 2];

    for (int i = 0; i < size; i++) {
        expandedArr[i] = arr[i];
    }

    for (int i = size; i < size * 2; i++) {
        expandedArr[i] = 0;
    }

    return expandedArr;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* expandedArr = expandArray(arr, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Expanded Array: ";
    for (int i = 0; i < size * 2; i++) {
        cout << expandedArr[i] << " ";
    }

    cout << endl;

    // Don't forget to delete the dynamically allocated memory
    delete[] expandedArr;

    return 0;
}