#include <iostream>
using namespace std;

int main()
{
	double mealCharge = 88.67, mealCost = 0.0675;
	double tip = 0.2, expense, totalBill, taxAmount ;

	taxAmount = mealCharge * mealCost;
	expense = mealCharge + mealCharge * mealCost;
	totalBill = expense + expense * tip;

	cout << "Meal cost is : " << mealCost << "$\n"
		 << "Tax amount is : " << taxAmount << "$\n"
		 << "Tip amount is : " << tip << "$\n"
		 << "Total bill is : " << totalBill << "$\n" << endl;
	return 0;
}