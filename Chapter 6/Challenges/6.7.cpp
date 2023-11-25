#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double fahrenheit) {
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main() {
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "=====================" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsiusTemp = celsius(fahrenheit);
        cout << fixed << setprecision(2) << fahrenheit << "\t\t" << celsiusTemp << endl;
    }

    return 0;
}