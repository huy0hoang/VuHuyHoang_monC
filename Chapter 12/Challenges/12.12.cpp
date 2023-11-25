#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Division {
    string name;
    int quarter;
    double sales;
};

void readSalesData(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening file." << endl;
        return;
    }

    Division divisions[4] = {
        {"East", 1, 0.0},
        {"West", 1, 0.0},
        {"North", 1, 0.0},
        {"South", 1, 0.0}
    };

    double quarterlySales[4] = { 0.0 };
    double divisionSales[4] = { 0.0 };
    double totalSales = 0.0;
    int highestQuarter = 1;
    int lowestQuarter = 1;

    while (!inFile.eof()) {
        string divisionName;
        int quarter;
        double sales;

        inFile >> divisionName >> quarter >> sales;

        for (int i = 0; i < 4; i++) {
            if (divisions[i].name == divisionName && divisions[i].quarter == quarter) {
                divisions[i].sales = sales;
                break;
            }
        }

        quarterlySales[quarter - 1] += sales;
        divisionSales[quarter - 1] += sales;
        totalSales += sales;
    }

    inFile.close();

    cout << "Total corporate sales for each quarter:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Quarter " << i + 1 << ": " << quarterlySales[i] << endl;
    }

    cout << endl;

    cout << "Total yearly sales for each division:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << divisions[i].name << ": " << divisionSales[i] << endl;
    }

    cout << endl;

    cout << "Total yearly corporate sales: " << totalSales << endl;

    cout << endl;

    double averageQuarterlySales = totalSales / 4.0;
    cout << "Average quarterly sales for the divisions: " << averageQuarterlySales << endl;

    cout << endl;

    double highestSales = quarterlySales[0];
    double lowestSales = quarterlySales[0];
    for (int i = 1; i < 4; i++) {
        if (quarterlySales[i] > highestSales) {
            highestSales = quarterlySales[i];
            highestQuarter = i + 1;
        }
        if (quarterlySales[i] < lowestSales) {
            lowestSales = quarterlySales[i];
            lowestQuarter = i + 1;
        }
    }

    cout << "Highest quarter for the corporation: Quarter " << highestQuarter << endl;
    cout << "Lowest quarter for the corporation: Quarter " << lowestQuarter << endl;
}

int main() {
    readSalesData("sales_data.txt");
    return 0;
}