#include <iostream>
#include <string>
using namespace std;

int main() {
    // Prompt the user to enter the names of two primary colors
    string color1, color2;
    cout << "Enter the name of the first primary color (red, blue, or yellow): ";
    cin >> color1;
    cout << "Enter the name of the second primary color (red, blue, or yellow): ";
    cin >> color2;

    // Check the input and display the resulting secondary color
    if (color1 == "red" && color2 == "blue" || color1 == "blue" && color2 == "red") {
        cout << "Purple" << endl;
    }
    else if (color1 == "red" && color2 == "yellow" || color1 == "yellow" && color2 == "red") {
        cout << "Orange" << endl;
    }
    else if (color1 == "blue" && color2 == "yellow" || color1 == "yellow" && color2 == "blue") {
        cout << "Green" << endl;
    }
    else {
        cout << "Error: Invalid colors entered." << endl;
    }

    return 0;
}