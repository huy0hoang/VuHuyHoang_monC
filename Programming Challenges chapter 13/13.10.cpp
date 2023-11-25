#include <iostream>

using namespace std;

class NumberArray {
private:
    double* array;
    int size;

public:
    NumberArray(int s) {
        if (s <= 0) {
            cout << "Invalid array size!" << endl;
            exit(1);
        }
        size = s;
        array = new double[size];
    }

    ~NumberArray() {
        delete[] array;
    }

    void storeNumber(int index, double number) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!" << endl;
            return;
        }
        array[index] = number;
    }

    double retrieveNumber(int index) const {
        if (index < 0 || index >= size) {
            cout << "Invalid index!" << endl;
            return 0.0;
        }
        return array[index];
    }

    double getHighestValue() const {
        double highest = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > highest) {
                highest = array[i];
            }
        }
        return highest;
    }

    double getLowestValue() const {
        double lowest = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < lowest) {
                lowest = array[i];
            }
        }
        return lowest;
    }

    double getAverage() const {
        double sum = 0.0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum / size;
    }
};

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    NumberArray numbers(size);

    for (int i = 0; i < size; i++) {
        double number;
        cout << "Enter number for index " << i << ": ";
        cin >> number;
        numbers.storeNumber(i, number);
    }

    cout << "Highest value: " << numbers.getHighestValue() << endl;
    cout << "Lowest value: " << numbers.getLowestValue() << endl;
    cout << "Average: " << numbers.getAverage() << endl;

    return 0;
}