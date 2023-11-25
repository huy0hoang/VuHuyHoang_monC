#include <iostream>
using namespace std;

const double PAINT_PER_GALLON_MIN_PRICE = 10.00;
const double LABOR_CHARGE_PER_HOUR = 25.00;
const double SQUARE_FEET_PER_GALLON = 110.0;

int getValidNumberOfRooms() {
    int numRooms;

    do {
        cout << "Enter the number of rooms to be painted: ";
        cin >> numRooms;

        if (numRooms < 1) {
            cout << "Invalid number of rooms. Please enter a number greater than or equal to 1." << endl;
        }
    } while (numRooms < 1);

    return numRooms;
}

double getValidPaintPrice() {
    double paintPrice;

    do {
        cout << "Enter the price of paint per gallon: $";
        cin >> paintPrice;

        if (paintPrice < PAINT_PER_GALLON_MIN_PRICE) {
            cout << "Invalid paint price. Please enter a price greater than or equal to $" << PAINT_PER_GALLON_MIN_PRICE << "." << endl;
        }
    } while (paintPrice < PAINT_PER_GALLON_MIN_PRICE);

    return paintPrice;
}

double getValidSquareFeet(int roomNumber) {
    double squareFeet;

    do {
        cout << "Enter the square footage of wall space for room " << roomNumber << ": ";
        cin >> squareFeet;

        if (squareFeet < 0) {
            cout << "Invalid square footage. Please enter a non-negative value." << endl;
        }
    } while (squareFeet < 0);

    return squareFeet;
}

double calculateGallonsOfPaint(double squareFeet) {
    double gallonsOfPaint = squareFeet / SQUARE_FEET_PER_GALLON;
    return gallonsOfPaint;
}

double calculateLaborHours(double squareFeet) {
    double laborHours = squareFeet / SQUARE_FEET_PER_GALLON * 8.0;
    return laborHours;
}

double calculatePaintCost(double gallonsOfPaint, double paintPrice) {
    double paintCost = gallonsOfPaint * paintPrice;
    return paintCost;
}

double calculateLaborCharges(double laborHours) {
    double laborCharges = laborHours * LABOR_CHARGE_PER_HOUR;
    return laborCharges;
}

double calculateTotalCost(double paintCost, double laborCharges) {
    double totalCost = paintCost + laborCharges;
    return totalCost;
}

int main() {
    int numRooms = getValidNumberOfRooms();
    double paintPrice = getValidPaintPrice();

    double totalSquareFeet = 0.0;

    for (int roomNumber = 1; roomNumber <= numRooms; roomNumber++) {
        double squareFeet = getValidSquareFeet(roomNumber);
        totalSquareFeet += squareFeet;
    }

    double gallonsOfPaint = calculateGallonsOfPaint(totalSquareFeet);
    double laborHours = calculateLaborHours(totalSquareFeet);
    double paintCost = calculatePaintCost(gallonsOfPaint, paintPrice);
    double laborCharges = calculateLaborCharges(laborHours);
    double totalCost = calculateTotalCost(paintCost, laborCharges);

    cout << "Number of gallons of paint required: " << gallonsOfPaint << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCharges << endl;
    cout << "Total cost of the paint job: $" << totalCost << endl;

    return 0;
}