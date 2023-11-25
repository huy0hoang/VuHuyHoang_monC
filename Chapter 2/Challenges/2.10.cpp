#include <iostream>
using namespace std;

int main() {
    int milesDriven = 375;
    int gallonsOfGasUsed = 15;
    double mpg;

    // Calculate MPG
    mpg = static_cast<double>(milesDriven) / gallonsOfGasUsed;

    // Display result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}