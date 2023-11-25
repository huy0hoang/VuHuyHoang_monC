#include <iostream>
using namespace std;

int main() {
    int tankSize = 20;
    double townMpg = 23.5;
    double highwayMpg = 28.9;
    double townDistance, highwayDistance;

    // Calculate distances
    townDistance = tankSize * townMpg;
    highwayDistance = tankSize * highwayMpg;

    // Display results
    cout << "When driven in town, the car can travel " << townDistance << " miles on one tank of gas." << endl;
    cout << "When driven on the highway, the car can travel " << highwayDistance << " miles on one tank of gas." << endl;

    return 0;
}