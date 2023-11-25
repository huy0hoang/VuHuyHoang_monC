#include <iostream>
using namespace std;

int main()
{
	const double caloeiesPerMinute = 3.6;
	cout << "CaloriesBurned\tMinute\n";


	for (int minute = 5; minute <= 30; ++minute)
	{
		double caloriesBurned = caloeiesPerMinute * minute;
		if (minute % 5 == 0)
		{
			cout << minute << "\t\t" << caloriesBurned << endl;
		}
	}


	return 0;
}