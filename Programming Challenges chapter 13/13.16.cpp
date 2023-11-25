#include <iostream>
#include <string>

using namespace std;

class SubstanceTemperature {
private:
    double temperature;

public:
    SubstanceTemperature() {
        temperature = 0.0;
    }

    SubstanceTemperature(double temp) {
        temperature = temp;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    bool isEthylFreezing() const {
        return temperature <= -173;
    }

    bool isEthylBoiling() const {
        return temperature >= 172;
    }

    bool isOxygenFreezing() const {
        return temperature <= -362;
    }

    bool isOxygenBoiling() const {
        return temperature >= -306;
    }

    bool isWaterFreezing() const {
        return temperature <= 32;
    }

    bool isWaterBoiling() const {
        return temperature >= 212;
    }
};

int main() {
    double temperature;
    cout << "Enter a temperature: ";
    cin >> temperature;

    SubstanceTemperature substanceTemp(temperature);

    cout << "Substances that will freeze at " << temperature << " degrees:" << endl;

    if (substanceTemp.isEthylFreezing()) {
        cout << "- Ethyl Alcohol" << endl;
    }

    if (substanceTemp.isOxygenFreezing()) {
        cout << "- Oxygen" << endl;
    }

    if (substanceTemp.isWaterFreezing()) {
        cout << "- Water" << endl;
    }

    cout << "Substances that will boil at " << temperature << " degrees:" << endl;

    if (substanceTemp.isEthylBoiling()) {
        cout << "- Ethyl Alcohol" << endl;
    }

    if (substanceTemp.isOxygenBoiling()) {
        cout << "- Oxygen" << endl;
    }

    if (substanceTemp.isWaterBoiling()) {
        cout << "- Water" << endl;
    }

    return 0;
}