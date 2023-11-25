#include <iostream>

int main() {
    double annualInterestRate, startingBalance, deposit, withdrawal;
    int months;

    // Get user input
    std::cout << "Enter the annual interest rate: ";
    std::cin >> annualInterestRate;

    std::cout << "Enter the starting balance: ";
    std::cin >> startingBalance;

    std::cout << "Enter the number of months: ";
    std::cin >> months;

    double monthlyInterestRate = annualInterestRate / 12;
    double balance = startingBalance;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;

    for (int i = 1; i <= months; i++) {
        std::cout << "\nMonth " << i << ":\n";

        // Ask for amount deposited
        std::cout << "Enter the amount deposited: ";
        std::cin >> deposit;

        // Validate deposit amount
        while (deposit < 0) {
            std::cout << "Invalid amount. Please enter a positive value: ";
            std::cin >> deposit;
        }

        // Add deposit to balance
        balance += deposit;
        totalDeposits += deposit;

        // Ask for amount withdrawn
        std::cout << "Enter the amount withdrawn: ";
        std::cin >> withdrawal;

        // Validate withdrawal amount
        while (withdrawal < 0 || withdrawal > balance) {
            std::cout << "Invalid amount. Please enter a positive value (or less than the current balance): ";
            std::cin >> withdrawal;
        }

        // Subtract withdrawal from balance
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Calculate monthly interest
        double monthlyInterest = balance * (monthlyInterestRate / 100);
        balance += monthlyInterest;
        totalInterest += monthlyInterest;
    }

    // Display results
    std::cout << "\nEnd balance: " << balance << std::endl;
    std::cout << "Total deposits: " << totalDeposits << std::endl;
    std::cout << "Total withdrawals: " << totalWithdrawals << std::endl;
    std::cout << "Total interest earned: " << totalInterest << std::endl;

    return 0;
}