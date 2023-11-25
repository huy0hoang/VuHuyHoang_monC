#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    do {
        cout << "Enter the number of students in the class (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Invalid number of students. Please enter a number between 1 and 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    string frontStudent, endStudent;

    for (int i = 1; i <= numStudents; ++i) {
        string name;
        cout << "Enter the name of student " << i << ": ";
        cin >> name;

        if (i == 1) {
            frontStudent = endStudent = name;
        }
        else {
            if (name < frontStudent) {
                frontStudent = name;
            }
            if (name > endStudent) {
                endStudent = name;
            }
        }
    }

    cout << endl;
    cout << "Front of the line: " << frontStudent << endl;
    cout << "End of the line: " << endStudent << endl;

    return 0;
}