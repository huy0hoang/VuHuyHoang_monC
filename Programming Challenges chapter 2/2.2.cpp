#include <iostream>
using namespace std;

int main() 
{
    double totalSales = 8.6;  // Total sales in millions
    double eastCoastPercentage = 0.58;

    double eastCoastSales = totalSales * eastCoastPercentage;

    std::cout << "The predicted sales for the East Coast division: $" << eastCoastSales << " million" << std::endl;

    return 0;
}