#include <iostream>
using namespace std;

int doSomething(int* x, int* y) {
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    return (*x) + (*y);
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = doSomething(&num1, &num2);

    cout << "Modified first number: " << num1 << std::endl;
    cout << "Modified second number: " << num2 << std::endl;
    cout << "Result: " << result << std::endl;

    return 0;
}