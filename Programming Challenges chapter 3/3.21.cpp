#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;
    const int SLICES_PER_PERSON = 4;

    int numPeople;
    double diameter;

    // Get input from the user
    cout << "Enter the number of people at the party: ";
    cin >> numPeople;
    cout << "Enter the diameter of the pizzas in inches: ";
    cin >> diameter;

    // Calculate the radius and area of each pizza
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    // Calculate the number of slices and pizzas needed
    int totalSlices = numPeople * SLICES_PER_PERSON;
    int numPizzas = static_cast<int>(ceil(totalSlices / (area / SLICE_AREA)));

    // Display the number of pizzas to purchase
    cout << "You need to buy " << numPizzas << " pizzas for the party." << endl;

    return 0;
}