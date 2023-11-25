#include <iostream>
using namespace std;

int main()
{
	int number;
	do
	{
		cout << "Nhap gia tri can tinh: ";
		cin >> number;
		if (number <= 0)
		{
			cout << "Nhap so duong" << endl;
		}
	} while (number <= 0);


	int total = 0;
	for (int i = 1; i <= number; i++)
	{
		total = total + i;
	}

	cout << "Tong cac so tu 1 den " << number << " la " << total << endl;
	return 0;
}