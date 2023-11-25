#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Hospital
{
    string patientName;
    int patientAge;
    string patientGender;
    string patientCondition;
};

void printReport(const Hospital& patient, ofstream& outputFile)
{
    outputFile << "Patient Name: " << patient.patientName << endl;
    outputFile << "Age: " << patient.patientAge << endl;
    outputFile << "Gender: " << patient.patientGender << endl;
    outputFile << "Condition: " << patient.patientCondition << endl;
    outputFile << endl;
}

int main()
{
    const int NUM_PATIENTS = 3;
    Hospital patients[NUM_PATIENTS];

    for (int i = 0; i < NUM_PATIENTS; i++)
    {
        cout << "Enter details for Patient " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, patients[i].patientName);
        cout << "Age: ";
        cin >> patients[i].patientAge;
        cin.ignore(); // Ignore the newline character
        cout << "Gender: ";
        getline(cin, patients[i].patientGender);
        cout << "Condition: ";
        getline(cin, patients[i].patientCondition);
        cout << endl;
    }

    ofstream outputFile("hospital_report.txt");
    if (outputFile.is_open())
    {
        for (int i = 0; i < NUM_PATIENTS; i++)
        {
            printReport(patients[i], outputFile);
        }
        outputFile.close();
        cout << "Hospital report has been written to the file 'hospital_report.txt'." << endl;
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

    return 0;
}