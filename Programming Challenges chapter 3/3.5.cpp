#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int males, females;

    // Get input from the user
    cout << "Enter the number of males in the class: ";
    cin >> males;
    cout << "Enter the number of females in the class: ";
    cin >> females;

    // Calculate the total number of students
    int totalStudents = males + females;

    // Calculate the percentage of males and females
    double malePercentage = static_cast<double>(males) / totalStudents * 100;
    double femalePercentage = static_cast<double>(females) / totalStudents * 100;

    // Display the results with one decimal point of precision
    cout << fixed << setprecision(1);
    cout << "Percentage of males in the class: " << malePercentage << "%" << endl;
    cout << "Percentage of females in the class: " << femalePercentage << "%" << endl;

    return 0;
}