#include <iostream>
using namespace std;

double calculateRetail(double wholesaleCost, double markupPercentage) {
    double markupAmount = wholesaleCost * (markupPercentage / 100);
    double retailPrice = wholesaleCost + markupAmount;
    return retailPrice;
}

int main() {
    double wholesaleCost, markupPercentage;

    cout << "Enter the wholesale cost of the item: ";
    cin >> wholesaleCost;

    if (wholesaleCost < 0) {
        cout << "Invalid wholesale cost. Please enter a non-negative value." << endl;
        return 0;
    }

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    if (markupPercentage < 0) {
        cout << "Invalid markup percentage. Please enter a non-negative value." << endl;
        return 0;
    }

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The retail price of the item is: $" << retailPrice << endl;

    return 0;
}