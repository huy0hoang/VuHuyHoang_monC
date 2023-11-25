#include <iostream>
using namespace std;

// Function to get the rectangle's length from the user
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Function to get the rectangle's width from the user
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Function to calculate the rectangle's area
double getArea(double length, double width) {
    double area = length * width;
    return area;
}

// Function to display the rectangle's data
void displayData(double length, double width, double area) {
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << area << endl;
}

int main() {
    double length, width, area;

    // Get the length and width from the user
    length = getLength();
    width = getWidth();

    // Calculate the area
    area = getArea(length, width);

    // Display the data
    displayData(length, width, area);

    return 0;
}