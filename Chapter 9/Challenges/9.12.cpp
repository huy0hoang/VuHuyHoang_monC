#include <iostream>

using namespace std;

int* shiftElements(const int* arr, int size) {
    int* shiftedArr = new int[size + 1];

    shiftedArr[0] = 0;

    for (int i = 0; i < size; i++) {
        shiftedArr[i + 1] = arr[i];
    }

    return shiftedArr;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* shiftedArr = shiftElements(arr, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Shifted Array: ";
    for (int i = 0; i < size + 1; i++) {
        cout << shiftedArr[i] << " ";
    }

    cout << endl;

    // Don't forget to delete the dynamically allocated memory
    delete[] shiftedArr;

    return 0;
}