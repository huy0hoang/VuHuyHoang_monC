#include <iostream>
using namespace std;

double fallingDistance(double time) {
    const double gravity = 9.8;
    double distance = 0.5 * gravity * time * time;
    return distance;
}

int main() {
    for (int time = 1; time <= 10; time++) {
        double distance = fallingDistance(time);
        cout << "Time: " << time << " s, Distance: " << distance << " m" << endl;
    }

    return 0;
}