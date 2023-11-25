#include <iostream>
using namespace std;

const int NUM_EMPLOYEES = 7;

void calculateGrossWages(long empIds[], int hours[], double payRate[], double wages[])
{
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter the hours worked by employee with ID " << empIds[i] << ": ";
        cin >> hours[i];

        while (hours[i] < 0)
        {
            cout << "Invalid input. Please enter a non-negative value: ";
            cin >> hours[i];
        }

        cout << "Enter the hourly pay rate for employee with ID " << empIds[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.00)
        {
            cout << "Invalid input. Please enter a pay rate of 15.00 or higher: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }
}

void displayEmployeeWages(long empIds[], double wages[])
{
    cout << "Employee Wages:" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Employee with ID " << empIds[i] << ": $" << wages[i] << endl;
    }
}

int main()
{
    long empIds[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    calculateGrossWages(empIds, hours, payRate, wages);
    displayEmployeeWages(empIds, wages);

    return 0;
}