#include <iostream>

using namespace std;

class Population {
private:
    int population;
    int births;
    int deaths;

public:
    Population(int p, int b, int d) {
        if (p < 1 || b < 0 || d < 0) {
            cout << "Invalid population, birth, or death numbers!" << endl;
            exit(1);
        }
        population = p;
        births = b;
        deaths = d;
    }

    double getBirthRate() const {
        return static_cast<double>(births) / population;
    }

    double getDeathRate() const {
        return static_cast<double>(deaths) / population;
    }
};

int main() {
    int population, births, deaths;

    cout << "Enter the population: ";
    cin >> population;

    cout << "Enter the number of births: ";
    cin >> births;

    cout << "Enter the number of deaths: ";
    cin >> deaths;

    Population pop(population, births, deaths);

    cout << "Birth Rate: " << pop.getBirthRate() << endl;
    cout << "Death Rate: " << pop.getDeathRate() << endl;

    return 0;
}