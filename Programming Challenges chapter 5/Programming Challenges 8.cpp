#include <iostream>
using namespace std;

int main() {
    int choice;
    bool quit = false;

    while (!quit) 
    {
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
        {
            int num1, num2;
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        }
        case 2: 
        {
            int num1, num2;
            cout << "Enter two numbers to subtract: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        }
        case 3: 
        {
            int num1, num2;
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        }
        case 4: 
        {
            double num1, num2;
            cout << "Enter two numbers to divide: ";
            cin >> num1 >> num2;
            if (num2 != 0) 
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else 
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        }
        case 5:
            quit = true;
            break;
        default:
            cout << "Error: Invalid choice. Please select a valid option." << endl;
        }

        cout << endl;
    }

    return 0;
}
