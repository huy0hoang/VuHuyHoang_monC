#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMagicSquare(int grid[][SIZE])
{
    // Calculate the sum of the first row
    int sum = 0;
    for (int j = 0; j < SIZE; j++)
    {
        sum += grid[0][j];
    }

    // Check if all rows have the same sum
    for (int i = 1; i < SIZE; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            rowSum += grid[i][j];
        }
        if (rowSum != sum)
        {
            return false;
        }
    }

    // Check if all columns have the same sum
    for (int j = 0; j < SIZE; j++)
    {
        int colSum = 0;
        for (int i = 0; i < SIZE; i++)
        {
            colSum += grid[i][j];
        }
        if (colSum != sum)
        {
            return false;
        }
    }

    // Check if the main diagonal has the same sum
    int diagonalSum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        diagonalSum += grid[i][i];
    }
    if (diagonalSum != sum)
    {
        return false;
    }

    // Check if the opposite diagonal has the same sum
    diagonalSum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        diagonalSum += grid[i][SIZE - 1 - i];
    }
    if (diagonalSum != sum)
    {
        return false;
    }

    // All checks passed, it is a Lo Shu Magic Square
    return true;
}

int main()
{
    int grid[SIZE][SIZE];

    cout << "Enter the numbers for the grid:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> grid[i][j];
        }
    }

    if (isMagicSquare(grid))
    {
        cout << "The grid is a Lo Shu Magic Square." << endl;
    }
    else
    {
        cout << "The grid is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}