#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest, largest;

    cout << "Enter a series of integers (-99 to end):" << endl;

    // Read the first number
    cout << "Number: ";
    cin >> number;

    // Initialize smallest and largest to the first number
    smallest = largest = number;

    // Continue reading numbers until -99 is entered
    while (number != -99) {
        // Update smallest and largest if necessary
        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }

        // Read the next number
        cout << "Number: ";
        cin >> number;
    }

    cout << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}