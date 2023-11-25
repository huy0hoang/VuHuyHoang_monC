#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int classA, classB, classC;
    const double classAPrice = 15.0;
    const double classBPrice = 12.0;
    const double classCPrice = 9.0;

    // Get input from the user
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classA;
    cout << "Enter the number of Class B tickets sold: ";
    cin >> classB;
    cout << "Enter the number of Class C tickets sold: ";
    cin >> classC;

    // Calculate the income generated from ticket sales
    double income = classA * classAPrice + classB * classBPrice + classC * classCPrice;

    // Display the result with fixed-point notation and two decimal places
    cout << fixed << setprecision(2);
    cout << "The total income generated from ticket sales is $" << income << endl;

    return 0;
}