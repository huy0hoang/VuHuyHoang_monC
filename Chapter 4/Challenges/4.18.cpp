#include <iostream>
using namespace std;

int main() {
    // Variables for calories and fat grams
    double calories, fatGrams;

    // Ask for the number of calories and fat grams
    cout << "Enter the number of calories in the food: ";
    cin >> calories;
    cout << "Enter the number of fat grams in the food: ";
    cin >> fatGrams;

    // Validate the inputs
    if (calories < 0 || fatGrams < 0) {
        cout << "Invalid input. The number of calories and fat grams must not be less than 0." << endl;
        return 0;
    }

    // Calculate the calories from fat
    double caloriesFromFat = fatGrams * 9;

    // Validate the calories from fat
    if (caloriesFromFat > calories) {
        cout << "Invalid input. The calories from fat cannot be greater than the total number of calories." << endl;
        return 0;
    }

    // Calculate the percentage of calories from fat
    double percentageOfCaloriesFromFat = (caloriesFromFat / calories) * 100;

    // Display the percentage of calories from fat
    cout << "Percentage of calories from fat: " << percentageOfCaloriesFromFat << "%" << endl;

    // Check if the food is low in fat
    if (percentageOfCaloriesFromFat < 30) {
        cout << "The food is low in fat." << endl;
    }

    return 0;
}