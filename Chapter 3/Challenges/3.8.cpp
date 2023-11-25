#include <iostream>
using namespace std;

int main() {
    const double widgetWeight = 12.5;

    double palletWeightAlone, palletWeightWithWidgets;

    // Get input from the user
    cout << "Enter the weight of the pallet alone: ";
    cin >> palletWeightAlone;
    cout << "Enter the weight of the pallet with widgets: ";
    cin >> palletWeightWithWidgets;

    // Calculate the weight of the widgets on the pallet
    double widgetsWeight = palletWeightWithWidgets - palletWeightAlone;

    // Calculate the number of widgets stacked on the pallet
    int numWidgets = static_cast<int>(widgetsWeight / widgetWeight);

    // Display the number of widgets stacked on the pallet
    cout << "Number of widgets stacked on the pallet: " << numWidgets << endl;

    return 0;
}