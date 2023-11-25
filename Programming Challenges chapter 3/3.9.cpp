#include <iostream>
using namespace std;

int main() {
    const int cookiesPerBag = 30;
    const int servingsPerBag = 10;
    const int caloriesPerServing = 300;

    int cookiesEaten;

    // Get input from the user
    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    double caloriesConsumed = (static_cast<double>(cookiesEaten) / cookiesPerBag) * (servingsPerBag * caloriesPerServing);

    // Display the total calories consumed
    cout << "Total calories consumed: " << caloriesConsumed << endl;

    return 0;
}