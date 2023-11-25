#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    bool isValidDate() {
        if (month < 1 || month > 12)
            return false;
        if (day < 1 || day > 31)
            return false;
        return true;
    }

    void printDate1() {
        if (!isValidDate()) {
            cout << "Invalid date." << endl;
            return;
        }
        cout << month << "/" << day << "/" << year << endl;
    }

    void printDate2() {
        if (!isValidDate()) {
            cout << "Invalid date." << endl;
            return;
        }
        string monthNames[12] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        cout << monthNames[month - 1] << " " << day << ", " << year << endl;
    }

    void printDate3() {
        if (!isValidDate()) {
            cout << "Invalid date." << endl;
            return;
        }
        string monthNames[12] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        cout << day << " " << monthNames[month - 1] << " " << year << endl;
    }
};

int main() {
    int month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year: ";
    cin >> year;

    Date date(month, day, year);

    cout << "Date in the format 1: ";
    date.printDate1();

    cout << "Date in the format 2: ";
    date.printDate2();

    cout << "Date in the format 3: ";
    date.printDate3();

    return 0;
}