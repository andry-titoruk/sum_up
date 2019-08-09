#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter the number which position\n has to be checked for containing\n a bit:\n";
	unsigned long long enteredNumber;
	cin >> enteredNumber;
	for (int i = 3/*31*/; i > -1; i--)
	{
		int power = pow(2, i);
		
		if (enteredNumber >= power)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}

	    enteredNumber = enteredNumber - pow(2, i);
			if (enteredNumber < 0)
			{
				enteredNumber = 0;
			}
	}
	return 0;
}