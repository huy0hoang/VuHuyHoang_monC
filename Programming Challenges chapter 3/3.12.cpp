#include <iostream>
using namespace std;

int main() {
    double celsius;

    // Get input from the user
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    double fahrenheit = (celsius * 9 / 5) + 32;

    // Display the converted temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}