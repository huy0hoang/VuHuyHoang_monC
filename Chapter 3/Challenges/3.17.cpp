#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int num1 = rand() % 1000; // Generate a random number between 0 and 999
    int num2 = rand() % 1000; // Generate another random number between 0 and 999

    cout << num1 << endl;
    cout << num2 << endl;

    cout << "Press any key when you're ready to check the answer." << endl;
    cin.ignore();

    int sum = num1 + num2;
    cout << sum << endl;

    return 0;
}