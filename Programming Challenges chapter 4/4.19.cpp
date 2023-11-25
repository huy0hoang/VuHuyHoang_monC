#include <iostream>
using namespace std;

int main() {
    // Variable for wavelength in meters
    double wavelength;

    // Ask for the wavelength of the electromagnetic wave
    cout << "Enter the wavelength of the electromagnetic wave (in meters): ";
    cin >> wavelength;

    // Determine the type of radiation based on the wavelength
    if (wavelength > 1e-2) {
        cout << "Radio Waves" << endl;
    }
    else if (wavelength > 1e-3) {
        cout << "Microwaves" << endl;
    }
    else if (wavelength > 7e-7) {
        cout << "Infrared" << endl;
    }
    else if (wavelength > 4e-7) {
        cout << "Visible Light" << endl;
    }
    else if (wavelength > 1e-8) {
        cout << "Ultraviolet" << endl;
    }
    else if (wavelength > 1e-11) {
        cout << "X Rays" << endl;
    }
    else {
        cout << "Gamma Rays" << endl;
    }

    return 0;
}