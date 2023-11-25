#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables for runner names and times
    string runner1, runner2, runner3;
    double time1, time2, time3;

    // Ask for runner names and times
    cout << "Enter the name of runner 1: ";
    cin >> runner1;
    cout << "Enter the time (in seconds) taken by runner 1: ";
    cin >> time1;

    cout << "Enter the name of runner 2: ";
    cin >> runner2;
    cout << "Enter the time (in seconds) taken by runner 2: ";
    cin >> time2;

    cout << "Enter the name of runner 3: ";
    cin >> runner3;
    cout << "Enter the time (in seconds) taken by runner 3: ";
    cin >> time3;

    // Validate the time inputs
    if (time1 <= 0 || time2 <= 0 || time3 <= 0) {
        cout << "Invalid input. The times must be positive numbers." << endl;
        return 0;
    }

    // Determine the order of runners
    if (time1 < time2 && time1 < time3) {
        cout << "First place: " << runner1 << endl;
        if (time2 < time3) {
            cout << "Second place: " << runner2 << endl;
            cout << "Third place: " << runner3 << endl;
        }
        else {
            cout << "Second place: " << runner3 << endl;
            cout << "Third place: " << runner2 << endl;
        }
    }
    else if (time2 < time1 && time2 < time3) {
        cout << "First place: " << runner2 << endl;
        if (time1 < time3) {
            cout << "Second place: " << runner1 << endl;
            cout << "Third place: " << runner3 << endl;
        }
        else {
            cout << "Second place: " << runner3 << endl;
            cout << "Third place: " << runner1 << endl;
        }
    }
    else {
        cout << "First place: " << runner3 << endl;
        if (time1 < time2) {
            cout << "Second place: " << runner1 << endl;
            cout << "Third place: " << runner2 << endl;
        }
        else {
            cout << "Second place: " << runner2 << endl;
            cout << "Third place: " << runner1 << endl;
        }
    }

    return 0;
}