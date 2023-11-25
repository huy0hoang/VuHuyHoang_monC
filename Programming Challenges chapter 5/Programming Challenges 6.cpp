#include <iostream>
using namespace std;

int main()
{
	double speed, times;


	do
	{
		cout << "The speed of a vehicle :";
		cin >> speed;
		cout << "How many hours it has traveled:";
		cin >> times;
		if (speed < 0 || times < 1)
		{
			cout << "Error value please enter again\n";
		}
	} while (speed < 0 || times < 1);


	cout << "Hour\tDistance Traveled\n";
	cout << "------------------------\n";
	for (int hours = 1; hours < times; ++hours)
	{
		double distance;
		distance = speed * hours;
		cout << hours << "\t" << distance << endl;
	}
	return 0;
}