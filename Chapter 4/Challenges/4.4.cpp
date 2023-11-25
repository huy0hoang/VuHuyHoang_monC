#include <iostream>
using namespace std;

int main() {
    // Ask the user for the length and width of the first rectangle
    double length1, width1;
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Ask the user for the length and width of the second rectangle
    double length2, width2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    // Calculate the areas of the rectangles
    double area1 = length1 * width1;
    double area2 = length2 * width2;

    // Compare the areas and display the result
    if (area1 > area2) {
        cout << "The first rectangle has a greater area." << endl;
    }
    else if (area2 > area1) {
        cout << "The second rectangle has a greater area." << endl;
    }
    else {
        cout << "Both rectangles have the same area." << endl;
    }

    return 0;
}