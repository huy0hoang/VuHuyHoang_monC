#include <iostream>
#include <string>

using namespace std;

const int NUM_MONTHS = 12;

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

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

    for (Month month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        inputWeatherData(yearData[month]);
        calculateAverageTemperature(yearData[month]);
    }

    double totalRainfall = 0.0;
    double highestTemperature = yearData[JANUARY].highTemperature;
    double lowestTemperature = yearData[JANUARY].lowTemperature;
    Month highestTempMonth = JANUARY;
    Month lowestTempMonth = JANUARY;
    double sumAverageTemperature = 0.0;

    for (Month month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        totalRainfall += yearData[month].totalRainfall;
        sumAverageTemperature += yearData[month].averageTemperature;

        if (yearData[month].highTemperature > highestTemperature) {
            highestTemperature = yearData[month].highTemperature;
            highestTempMonth = month;
        }

        if (yearData[month].lowTemperature < lowestTemperature) {
            lowestTemperature = yearData[month].lowTemperature;
            lowestTempMonth = month;
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