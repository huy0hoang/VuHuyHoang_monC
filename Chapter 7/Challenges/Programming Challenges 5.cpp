#include <iostream>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

void enterFoodData(int foodData[][NUM_DAYS])
{
    for (int i = 0; i < NUM_MONKEYS; i++)
    {
        cout << "Enter the food data for Monkey " << (i + 1) << ":" << endl;
        for (int j = 0; j < NUM_DAYS; j++)
        {
            double pounds;
            do
            {
                cout << "Enter the amount of food (in pounds) eaten on day " << (j + 1) << ": ";
                cin >> pounds;
            } while (pounds < 0);

            foodData[i][j] = pounds;
        }
    }
}

void displayReport(int foodData[][NUM_DAYS])
{
    double totalFood = 0;
    double averageFood = 0;
    double minFood = foodData[0][0];
    double maxFood = foodData[0][0];

    for (int i = 0; i < NUM_MONKEYS; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            totalFood += foodData[i][j];

            if (foodData[i][j] < minFood)
            {
                minFood = foodData[i][j];
            }

            if (foodData[i][j] > maxFood)
            {
                maxFood = foodData[i][j];
            }
        }
    }

    averageFood = totalFood / (NUM_MONKEYS * NUM_DAYS);

    cout << "Food Consumption Report:" << endl;
    cout << "Average amount of food eaten per day by the family of monkeys: " << averageFood << " pounds" << endl;
    cout << "Least amount of food eaten during the week by any one monkey: " << minFood << " pounds" << endl;
    cout << "Greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds" << endl;
}

int main()
{
    int foodData[NUM_MONKEYS][NUM_DAYS];

    enterFoodData(foodData);
    displayReport(foodData);

    return 0;
}