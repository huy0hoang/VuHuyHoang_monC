#include <iostream>
using namespace std;

int main()
{
	const double risePerYear = 1.5;

	cout << "Years\tRise(mm)\n";
	for (int year = 1; year < 25; ++year)
	{
		double totalRise = year * risePerYear;
		cout <<  year << "\t" <<  totalRise << endl;
		
	}
	return 0;
}