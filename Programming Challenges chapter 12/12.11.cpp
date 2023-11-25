#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Division {
    string name;
    int quarter;
    double sales;
};

void writeSalesData(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file." << endl;
        return;
    }

    Division divisions[4] = {
        {"East", 1, 0.0},
        {"West", 1, 0.0},
        {"NorthApologies for the incomplete response. Here's the complete solution for Programming Challenge 11:

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Division {
    string name;
    int quarter;
    double sales;
};

void writeSalesData(const string & filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file." << endl;
        return;
    }

    Division divisions[4] = {
        {"East", 1, 0.0},
        {"West", 1, 0.0},
        {"North", 1, 0.0},
        {"South", 1, 0.0}
    };

    for (int i = 0; i < 4; i++) {
        cout << "Enter sales for " << divisions[i].name << " division:" << endl;
        for (int j = 0; j < 4; j++) {
            do {
                cout << "Quarter " << j + 1 << ": ";
                cin >> divisions[i].sales;
            } while (divisions[i].sales < 0);

            divisions[i].quarter = j + 1;
            outFile << divisions[i].name << " " << divisions[i].quarter << " " << divisions[i].sales << endl;
        }
        cout << endl;
    }

    outFile.close();
    cout << "Sales data written to file." << endl;
}

int main() {
    writeSalesData("sales_data.txt");
    return 0;
}