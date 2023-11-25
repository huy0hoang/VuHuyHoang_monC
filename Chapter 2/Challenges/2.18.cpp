#include <iostream>
using namespace std;

int main() {
    int totalCustomers = 16500;
    double energyDrinkPercentage = 0.15;
    double citrusDrinkPercentage = 0.58;

    // Calculate the approximate number of customers who purchase energy drinks per week
    int energyDrinkCustomers = totalCustomers * energyDrinkPercentage;

    // Calculate the approximate number of customers who prefer citrus-flavored energy drinks
    int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkPercentage;

    // Display the results
    cout << "Approximate number of customers who purchase energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrusDrinkCustomers << endl;

    return 0;
}