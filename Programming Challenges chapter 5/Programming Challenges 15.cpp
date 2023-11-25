#include <iostream>
#include <iomanip>

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    std::cout << "Weekly Payroll Report" << std::endl;

    do {
        std::cout << "Employee Number (enter 0 to exit): ";
        std::cin >> employeeNumber;

        if (employeeNumber == 0) {
            break; // Exit the loop if employeeNumber is 0
        }

        std::cout << "Gross Pay: $";
        std::cin >> grossPay;

        while (grossPay < 0) {
            std::cout << "Invalid input. Gross Pay cannot be negative. Please reenter: $";
            std::cin >> grossPay;
        }

        std::cout << "State Tax: $";
        std::cin >> stateTax;

        while (stateTax < 0 || stateTax > grossPay) {
            std::cout << "Invalid input. State Tax cannot be negative or greater than Gross Pay. Please reenter: $";
            std::cin >> stateTax;
        }

        std::cout << "Federal Tax: $";
        std::cin >> federalTax;

        while (federalTax < 0 || federalTax > grossPay) {
            std::cout << "Invalid input. Federal Tax cannot be negative or greater than Gross Pay. Please reenter: $";
            std::cin >> federalTax;
        }

        std::cout << "FICA Withholdings: $";
        std::cin >> ficaWithholdings;

        while (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            std::cout << "Invalid input. FICA Withholdings cannot be negative or greater than Gross Pay. Please reenter: $";
            std::cin >> ficaWithholdings;
        }

        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        while (netPay < 0) {
            std::cout << "Error: The sum of State Tax, Federal Tax, and FICA Withholdings cannot exceed Gross Pay. Please reenter the data." << std::endl;

            std::cout << "State Tax: $";
            std::cin >> stateTax;

            while (stateTax < 0 || stateTax > grossPay) {
                std::cout << "Invalid input. State Tax cannot be negative or greater than Gross Pay. Please reenter: $";
                std::cin >> stateTax;
            }

            std::cout << "Federal Tax: $";
            std::cin >> federalTax;

            while (federalTax < 0 || federalTax > grossPay) {
                std::cout << "Invalid input. Federal Tax cannot be negative or greater than Gross Pay. Please reenter: $";
                std::cin >> federalTax;
            }

            std::cout << "FICA Withholdings: $";
            std::cin >> ficaWithholdings;

            while (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
                std::cout << "Invalid input. FICA Withholdings cannot be negative or greater than Gross Pay. Please reenter: $";
                std::cin >> ficaWithholdings;
            }

            netPay = grossPay - stateTax - federalTax - ficaWithholdings;
        }

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += netPay;

        std::cout << std::endl;

    } while (true);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nPayroll Summary" << std::endl;
    std::cout << "Total Gross Pay: $" << totalGrossPay << std::endl;
    std::cout << "Total State Tax: $" << totalStateTax << std::endl;
    std::cout << "Total Federal Tax: $" << totalFederalTax << std::endl;
    std::cout << "Total FICA Withholdings: $" << totalFicaWithholdings << std::endl << "Total Net Pay: $" << totalNetPay << std::endl;

    return 0;
}