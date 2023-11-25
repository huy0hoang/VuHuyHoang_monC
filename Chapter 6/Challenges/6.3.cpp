#include <iostream>
using namespace std;

// Function to get the sales figure for a division
double getSales(const string& divisionName) {
    double sales;
    cout << "Enter the quarterly sales figure for " << divisionName << ": $";
    cin >> sales;

    while (sales < 0) {
        cout << "Invalid sales figure. Please enter a non-negative value: $";
        cin >> sales;
    }

    return sales;
}

// Function to find the highest sales figure and print the division name and sales figure
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) {
    double highestSales = northeastSales;
    string divisionName = "Northeast";

    if (southeastSales > highestSales) {
        highestSales = southeastSales;
        divisionName = "Southeast";
    }

    if (northwestSales > highestSales) {
        highestSales = northwestSales;
        divisionName = "Northwest";
    }

    if (southwestSales > highestSales) {
        highestSales = southwestSales;
        divisionName = "Southwest";
    }

    cout << "The division with the highest sales is " << divisionName << " with $" << highestSales << " in sales." << endl;
}

int main() {
    double northeastSales, southeastSales, northwestSales, southwestSales;

    // Get the sales figures for each division
    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    // Find the division with the highest sales
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}