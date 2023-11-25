#include <iostream>
using namespace std;

int main() {
    // Ask for the number of books purchased
    int numBooks;
    cout << "Enter the number of books purchased this month: ";
    cin >> numBooks;

    // Calculate the points based on the number of books
    int points;
    if (numBooks == 0) {
        points = 0;
    }
    else if (numBooks == 1) {
        points = 5;
    }
    else if (numBooks == 2) {
        points = 15;
    }
    else if (numBooks == 3) {
        points = 30;
    }
    else {
        points = 60;
    }

    // Display the number of points awarded
    cout << "Number of points awarded: " << points << endl;

    return 0;
}