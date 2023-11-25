#include <iostream>
using namespace std;

int main()
{
	double stateSaleTax = 0.04 , countySalesTax = 0.02;
	double totalSale = 95;
	double totalTax;
	totalTax = totalSale * (stateSaleTax + countySalesTax);
	cout << "Your sales tax is " << totalTax << "$" << endl;
	return 0;

}