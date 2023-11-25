#include <iostream>
using namespace std;

int main() {
    // Ask the user to enter two numbers
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine the smaller and larger numbers
    float smaller = (num1 < num2) ? num1 : num2;
    float larger = (num1 > num2) ? num1 : num2;

    // Print the results
    cout << "Smaller number: " << smaller << endl;
    cout << "Larger number: " << larger << endl;

    return 0;
}