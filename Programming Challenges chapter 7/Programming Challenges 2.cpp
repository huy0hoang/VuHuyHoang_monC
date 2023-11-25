#include <iostream>
using namespace std;

const int MONTH = 12;

int main()
{
    double rainfall[MONTH];
    double totalRainfall = 0.0;
    double maxRainfall, minRainfall;
    double averageRainfall;

    for (int count = 0; count < MONTH; count++)
    {
        cout << "Enter the rainfall of month " << (count + 1) << ": ";
        cin >> rainfall[count];

        // Xác th?c d? li?u ??u vào
        while (rainfall[count] < 0.0)
        {
            cout << "Invalid input. Please enter a non-negative value: ";
            cin >> rainfall[count];
        }

        totalRainfall += rainfall[count];
    }

    maxRainfall = rainfall[0];
    minRainfall = rainfall[0];

    for (int count = 1; count < MONTH; count++)
    {
        if (rainfall[count] > maxRainfall)
        {
            maxRainfall = rainfall[count];
        }

        if (rainfall[count] < minRainfall)
        {
            minRainfall = rainfall[count];
        }
    }

    averageRainfall = totalRainfall / MONTH;

    cout << "Total rainfall for the year: " << totalRainfall << endl;
    cout << "Average monthly rainfall: " << averageRainfall << endl;
    cout << "Month with the highest rainfall: " << maxRainfall << endl;
    cout << "Month with the lowest rainfall: " << minRainfall << endl;

    return 0;
}