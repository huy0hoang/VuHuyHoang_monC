#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCircleArea(double radius) {
    return 3.1415 * pow(radius, 2);
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    while (true) {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0) {
                cout << "Invalid radius. Radius cannot be negative." << endl;
            }
            else {
                double area = calculateCircleArea(radius);
                cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Invalid length or width. Length and width cannot be negative." << endl;
            }
            else {
                double area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 3) {
            double base, height;
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Invalid base or height. Base and height cannot be negative." << endl;
            }
            else {
                double area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }

        cout << endl;
    }

    return 0;
}