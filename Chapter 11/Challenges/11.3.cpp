#include <iostream>
#include <string>

using namespace std;

struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

void calculateDivisionData(DivisionData& division) {
    division.totalAnnualSales = division.firstQuarterSales + division.secondQuarterSales + division.thirdQuarterSales + division.fourthQuarterSales;
    division.averageQuarterlySales = division.totalAnnualSales / 4.0;
}

void inputDivisionSales(DivisionData& division) {
    cout << "Enter sales data for " << division.divisionName << " division:" << endl;
    cout << "First Quarter Sales: $";
    cin >> division.firstQuarterSales;
    cout << "Second Quarter Sales: $";
    cin >> division.secondQuarterSales;
    cout << "Third Quarter Sales: $";
    cin >> division.thirdQuarterSales;
    cout << "Fourth Quarter Sales: $";
    cin >> division.fourthQuarterSales;

    // Input validation: Ensure sales figures are not negative
    if (division.firstQuarterSales < 0 || division.secondQuarterSales < 0 ||
        division.thirdQuarterSales < 0 || division.fourthQuarterSales < 0) {
        cout << "Invalid input. Sales figures cannot be negative." << endl;
        exit(1);
    }
}

void displayDivisionData(const DivisionData& division) {
    cout << "Division: " << division.divisionName << endl;
    cout << "First Quarter Sales: $" << division.firstQuarterSales << endl;
    cout << "Second Quarter Sales: $" << division.secondQuarterSales << endl;
    cout << "Third Quarter Sales: $" << division.thirdQuarterSales << endl;
    cout << "Fourth Quarter Sales: $" << division.fourthQuarterSales << endl;
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
    cout << endl;
}

int main() {
    DivisionData eastDivision;
    eastDivision.divisionName = "East";
    inputDivisionSales(eastDivision);
    calculateDivisionData(eastDivision);

    DivisionData westDivision;
    westDivision.divisionName = "West";
    inputDivisionSales(westDivision);
    calculateDivisionData(westDivision);

    DivisionData northDivision;
    northDivision.divisionName = "North";
    inputDivisionSales(northDivision);
    calculateDivisionData(northDivision);

    DivisionData southDivision;
    southDivision.divisionName = "South";
    inputDivisionSales(southDivision);
    calculateDivisionData(southDivision);

    displayDivisionData(eastDivision);
    displayDivisionData(westDivision);
    displayDivisionData(northDivision);
    displayDivisionData(southDivision);

    return 0;
}