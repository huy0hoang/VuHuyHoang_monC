#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string name;
    int idNum;
    double* tests;
    double average;
    char grade;
};

void calculateAverage(Student& student, int numTests) {
    double sum = 0.0;
    for (int i = 0; i < numTests; i++) {
        sum += student.tests[i];
    }
    student.average = sum / numTests;
}

void assignGrade(Student& student) {
    if (student.average >= 91.0) {
        student.grade = 'A';
    }
    else if (student.average >= 81.0) {
        student.grade = 'B';
    }
    else if (student.average >= 71.0) {
        student.grade = 'C';
    }
    else if (student.average >= 61.0) {
        student.grade = 'D';
    }
    else {
        student.grade = 'F';
    }
}

int main() {
    int numStudents, numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "Enter the number of tests: ";
    cin >> numTests;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter data for student #" << i + 1 << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "ID Number: ";
        cin >> students[i].idNum;

        students[i].tests = new double[numTests];

        for (int j = 0; j < numTests; j++) {
            cout << "Enter test score #" << j + 1 << ": ";
            cin >> students[i].tests[j];

            while (students[i].tests[j] < 0) {
                cout << "Invalid test score. Please enter a non-negative number: ";
                cin >> students[i].tests[j];
            }
        }

        calculateAverage(students[i], numTests);
        assignGrade(students[i]);

        cout << endl;
    }

    // Displaying the table
    cout << "Student Data:" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << setw(15) << "Name" << setw(10) << "ID Number" << setw(15) << "Average Score" << setw(10) << "Grade" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 0; i < numStudents; i++) {
        cout << setw(15) << students[i].name << setw(10) << students[i].idNum << setw(15) << students[i].average << setw(10) << students[i].grade << endl;
    }

    // Deallocate memory
    for (int i = 0; i < numStudents; i++) {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}