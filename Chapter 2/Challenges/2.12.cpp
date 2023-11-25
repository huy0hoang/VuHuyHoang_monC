#include <iostream>
using namespace std;

int main() {
    int squareFeet = 391876;
    double acres;

    // Calculate acres
    acres = static_cast<double>(squareFeet) / 43560;

    // Display result
    cout << "The tract of land is approximately " << acres << " acres." << endl;

    return 0;
}