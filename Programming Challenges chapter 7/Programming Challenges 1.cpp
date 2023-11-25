#include <iostream>
using namespace std;

int main()
{
	const int NUM = 10;
	int number[NUM];
	int count;
	int max,min;
	
	for (count = 0; count < NUM; count++)
	{
		cout << "Enter the value at array " << (count + 1) << ":";
			cin >> number[count];
			
	}

	max = number[0];
	min = number[0];
	for (count = 0; count < NUM; count++)
	{
		if (number[count] > max)
		{
			max = number[count];
		}
		if  (number[count] < min)
		{
			min = number[count];
		}
	}

	cout << "The largest number is: " << max << endl;
	cout << "The smallest number is: " << min << endl;
}