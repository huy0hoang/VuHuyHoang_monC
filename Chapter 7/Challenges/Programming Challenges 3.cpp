#include <iostream>
#include <string>
using namespace std;

const int NUM_SALSAS = 5;

void enterSalesData(string salsaNames[], int jarsSold[])
{
    for (int i = 0; i < NUM_SALSAS; i++)
    {
        cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
        cin >> jarsSold[i];
    }
}

void displaySalesData(string salsaNames[], int jarsSold[])
{
    int totalSales = 0;
    int maxSalesIndex = 0;
    int minSalesIndex = 0;

    for (int i = 0; i < NUM_SALSAS; i++)
    {
        totalSales += jarsSold[i];

        if (jarsSold[i] > jarsSold[maxSalesIndex])
        {
            maxSalesIndex = i;
        }

        if (jarsSold[i] < jarsSold[minSalesIndex])
        {
            minSalesIndex = i;
        }
    }

    cout << "Sales report:" << endl;
    for (int i = 0; i < NUM_SALSAS; i++)
    {
        cout << salsaNames[i] << ": " << jarsSold[i] << " jars" << endl;
    }

    cout << "Total sales: " << totalSales << " jars" << endl;
    cout << "Highest selling product: " << salsaNames[maxSalesIndex] << " (" << jarsSold[maxSalesIndex] << " jars)" << endl;
    cout << "Lowest selling product: " << salsaNames[minSalesIndex] << " (" << jarsSold[minSalesIndex] << " jars)" << endl;
}

int main()
{
    string salsaNames[NUM_SALSAS] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_SALSAS];

    enterSalesData(salsaNames, jarsSold);
    displaySalesData(salsaNames, jarsSold);

    return 0;
}