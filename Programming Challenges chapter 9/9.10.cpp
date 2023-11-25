#include <iostream>

using namespace std;

int* reverseArray(const int* arr, int size) {
    int* reversedArr = new int[size];

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }

    return reversedArr;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* reversedArr = reverseArray(arr, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }

    cout << endl;

    // Don't forget to delete the dynamically allocated memory
    delete[] reversedArr;

    return 0;
}