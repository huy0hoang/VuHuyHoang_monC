#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string convertDateFormat(const string& date) {
    stringstream ss(date);
    string month, day, year;
    getline(ss, month, '/');
    getline(ss, day, '/');
    getline(ss, year);

    string monthNames[] = { "", "January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December" };

    int monthIndex;
    stringstream(month) >> monthIndex;

    string convertedDate = monthNames[monthIndex] + " " + day + ", " + year;
    return convertedDate;
}

int main() {
    string date;
    cout << "Enter a date (mm/dd/yyyy): ";
    getline(cin, date);

    string convertedDate = convertDateFormat(date);

    cout << "Converted date: " << convertedDate << endl;

    return 0;
}