#include <iostream>
using namespace std;

int main()
{
	for (int code = 0; code < 128; ++code)
	{
		cout << static_cast<char>(code) << ' ';
		if ((code + 1) % 16 == 0)
		{
			
		     cout << endl;
		}
	}
	return 0;
}
