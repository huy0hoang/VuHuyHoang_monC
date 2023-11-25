#include <iostream>

using namespace std;

// Function to dynamically allocate an array of integers
int* allocateArray(int numElements) {
    // Dynamically allocate memory for the array
    int* arr = new int[numElements];

    return arr;
}

int main() {
    int numElements;

    // Get the number of elements from the user
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Dynamically allocate an array of integers
    int* myArray = allocateArray(numElements);

    // Use the allocated array as needed
    for (int i = 0; i < numElements; i++) {
        myArray[i] = i + 1; // Example: Assigning values to the array elements
    }

    // Display the array elements
    cout << "Array elements:" << endl;
    for (int i = 0; i < numElements; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] myArray;

    return 0;
}