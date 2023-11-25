#include <iostream>
#include <string>

using namespace std;

const int NUM_MONTHS = 12;

struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

void inputWeatherData(WeatherData& month) {
    cout << "Enter weather data for a month:" << endl;
    cout << "Total Rainfall (in inches): ";
    cin >> month.totalRainfall;
    cout << "High Temperature (in Fahrenheit): ";
    cin >> month.highTemperature;
    cout << "Low Temperature (in Fahrenheit): ";
    cin >> month.lowTemperature;
    cout << endl;

    // Input validation: Validate temperature range
    if (month.highTemperature < -100 || month.highTemperature > 140 ||
        month.lowTemperature < -100 || month.lowTemperature > 140) {
        cout << "Invalid input. Temperature should be within the range -100 to 140 degrees Fahrenheit." << endl;
        exit(1);
    }
}

void calculateAverageTemperature(WeatherData& month) {
    month.averageTemperature = (month.highTemperature + month.lowTemperature) / 2.0;
}

void displayMonthlyData(const WeatherData& month, const string& monthName) {
    cout << "Month: " << monthName << endl;
    cout << "Total Rainfall: " << month.totalRainfall << " inches" << endl;
    cout << "High Temperature: " << month.highTemperature << " degrees Fahrenheit" << endl;
    cout << "Low Temperature: " << month.lowTemperature << " degrees Fahrenheit" << endl;
    cout << "Average Temperature: " << month.averageTemperature << " degrees Fahrenheit" << endl;
    cout << endl;
}

int main() {
    string monthNames[NUM_MONTHS] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    WeatherData yearData[NUM_MONTHS];

    for (int i = 0; i < NUM_MONTHS; i++) {
        inputWeatherData(yearData[i]);
        calculateAverageTemperature(yearData[i]);
    }

    double totalRainfall = 0.0;
    double highestTemperature = yearData[0].highTemperature;
    double lowestTemperature = yearData[0].lowTemperature;
    int highestTempMonth = 0;
    int lowestTempMonth = 0;
    double sumAverageTemperature = 0.0;

    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRainfall += yearData[i].totalRainfall;
        sumAverageTemperature += yearData[i].averageTemperature;

        if (yearData[i].highTemperature > highestTemperature) {
            highestTemperature = yearData[i].highTemperature;
            highestTempMonth = i;
        }

        if (yearData[i].lowTemperature < lowestTemperature) {
            lowestTemperature = yearData[i].lowTemperature;
            lowestTempMonth = i;
        }
    }

    double averageMonthlyRainfall = totalRainfall / NUM_MONTHS;
    double averageAverageTemperature = sumAverageTemperature / NUM_MONTHS;

    cout << "Weather Statistics for the Year:" << endl;
    cout << "--------------------------------" << endl;
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << " inches" << endl;
    cout << "Total Rainfall for the Year: " << totalRainfall << " inches" << endl;
    cout << "Highest Temperature: " << highestTemperature << " degrees Fahrenheit" << " (Month: " << monthNames[highestTempMonth] << ")" << endl;
    cout << "Lowest Temperature: " << lowestTemperature << " degrees Fahrenheit" << " (Month: " << monthNames[lowestTempMonth] << ")" << endl;
    cout << "Average of Monthly Average Temperatures: " << averageAverageTemperature << " degrees Fahrenheit" << endl;

    return 0;
}