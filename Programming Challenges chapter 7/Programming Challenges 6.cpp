#include <iostream>
#include <fstream>
using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

void readWeatherData(char weatherData[][NUM_DAYS])
{
    ifstream inputFile("RainOrShine.txt");
    if (!inputFile)
    {
        cerr << "Failed to open file." << endl;
        return;
    }

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            inputFile >> weatherData[i][j];
        }
    }

    inputFile.close();
}

void displayWeatherReport(char weatherData[][NUM_DAYS])
{
    int rainyDays[NUM_MONTHS] = { 0 };
    int cloudyDays[NUM_MONTHS] = { 0 };
    int sunnyDays[NUM_MONTHS] = { 0 };
    int maxRainyMonthIndex = 0;

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            switch (weatherData[i][j])
            {
            case 'R':
                rainyDays[i]++;
                break;
            case 'C':
                cloudyDays[i]++;
                break;
            case 'S':
                sunnyDays[i]++;
                break;
            }
        }

        if (rainyDays[i] > rainyDays[maxRainyMonthIndex])
        {
            maxRainyMonthIndex = i;
        }
    }

    cout << "Weather Report:" << endl;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Month " << i << ":" << endl;
        cout << "Rainy days: " << rainyDays[i] << endl;
        cout << "Cloudy days: " << cloudyDays[i] << endl;
        cout << "Sunny days: " << sunnyDays[i] << endl;
        cout << endl;
    }

    cout << "Month with the largest number of rainy days: " << maxRainyMonthIndex << endl;
}

int main()
{
    char weatherData[NUM_MONTHS][NUM_DAYS];

    readWeatherData(weatherData);
    displayWeatherReport(weatherData);

    return 0;
}