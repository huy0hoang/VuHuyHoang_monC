#include <iostream>
using namespace std;

int main()
{
	int days;
	do
	{
		cout << "Enter the number of days: " ;
		cin >> days;
		if (days <= 0)
		{
			cout << "Invalid number of days" << endl ;
		}
	} while (days <= 0);

		cout << "Days\tSalary($)" << endl ;
	

	float salary = 0.5;
	for (int num = 1; num <= days; ++num)
	{
		salary *=  2;
		cout << num << "\t" << salary << endl;
	}
	return 0;
}