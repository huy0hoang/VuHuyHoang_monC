#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Celsius to Fahrenheit Conversion" << endl;
    cout << "------------------------------" << endl;
    cout << setw(10) << "Celsius" << setw(12) << "Fahrenheit" << endl;

    for (int celsius = 0; celsius <= 20; ++celsius) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << setw(10) << celsius << setw(12) << fixed << setprecision(2) << fahrenheit << endl;
    }

    return 0;
}