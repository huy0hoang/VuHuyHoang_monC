#include <iostream>
using namespace std;

void displayNumbersGreaterThanN(int arr[], int size, int n)
{
    cout << "Numbers greater than " << n << ": ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = { 10, 5, 8, 12, 3 };
    int n;

    cout << "Enter a number: ";
    cin >> n;

    displayNumbersGreaterThanN(numbers, SIZE, n);

    return 0;
}