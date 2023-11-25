#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void readFile(const string& fileName, vector<int>& numbers)
{
    ifstream inputFile(fileName);
    if (!inputFile)
    {
        cerr << "Failed to open file." << endl;
        return;
    }

    int number;
    while (inputFile >> number)
    {
        numbers.push_back(number);
    }

    inputFile.close();
}

int findLowestNumber(const vector<int>& numbers)
{
    int lowest = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }
    return lowest;
}

int findHighestNumber(const vector<int>& numbers)
{
    int highest = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > highest)
        {
            highest = numbers[i];
        }
    }
    return highest;
}

int calculateTotal(const vector<int>& numbers)
{
    int total = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        total += numbers[i];
    }
    return total;
}

double calculateAverage(const vector<int>& numbers)
{
    int total = calculateTotal(numbers);
    return static_cast<double>(total) / numbers.size();
}

int main()
{
    vector<int> numbers;
    string fileName;

    cout << "Enter the file name: ";
    cin >> fileName;

    readFile(fileName, numbers);

    if (!numbers.empty())
    {
        int lowest = findLowestNumber(numbers);
        int highest = findHighestNumber(numbers);
        int total = calculateTotal(numbers);
        double average = calculateAverage(numbers);

        cout << "Lowest number: " << lowest << endl;
        cout << "Highest number: " << highest << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
    else
    {
        cout << "No numbers found in the file." << endl;
    }

    return 0;
}