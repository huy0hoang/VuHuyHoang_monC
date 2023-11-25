#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }

    int getYearModel() const {
        return yearModel;
    }

    string getMake() const {
        return make;
    }

    int getSpeed() const {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
        if (speed < 0)
            speed = 0;
    }
};

int main() {
    Car car(2021, "Toyota");

    cout << "Car's year model: " << car.getYearModel() << endl;
    cout << "Car's make: " << car.getMake() << endl;

    cout << "Accelerating..." << endl;
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        cout << "Current speed: " << car.getSpeed() << " mph" << endl;
    }

    cout << "Braking..." << endl;
    for (int i = 0; i < 5; i++) {
        car.brake();
        cout << "Current speed: " << car.getSpeed() << " mph" << endl;
    }

    return 0;
}