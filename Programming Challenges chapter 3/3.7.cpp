#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const double adultTicketPrice = 10.0;
    const double childTicketPrice = 6.0;
    const double theaterPercentage = 0.2;

    string movieName;
    int adultTicketsSold, childTicketsSold;

    // Get input from the user
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    // Calculate the gross box office profit
    double grossProfit = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);

    // Calculate the net box office profit and amount paid to the distributor
    double netProfit = grossProfit * theaterPercentage;
    double distributorAmount = grossProfit - netProfit;

    // Display the results with two decimal places of precision
    cout << fixed << setprecision(2);
    cout << "Movie Name: \"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $ " << grossProfit << endl;
    cout << "Net Box Office Profit: $ " << netProfit << endl;
    cout << "Amount Paid to Distributor: $ " << distributorAmount << endl;

    return 0;
}