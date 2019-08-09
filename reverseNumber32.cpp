#include <iostream>
#include <string>
#include<cmath>
using namespace std;

short i;
short temp = 0;

int main()
{
	long long arr[32];

	for (i = 0; i < 32; i++)
	{
		cout << "[" << i + 1 << "]" << ":";
		cin >> arr[i];
	}

	for (i = 0; i < 32; i++)
	{
		cout << arr[i];
	}

	cout << "\n";

    //reverse

	if (arr[0] < 0)
	{
		for (i = 0; i < 16; i++)
		{
			temp = abs(arr[i]);
			arr[i] = arr[31 - i];
			arr[31 - i] = temp;
		};

		cout << "-";

		for (i = 0; i < 32; i++)
		{
			cout << arr[i];
		}
	}

	else
	{
		for (i = 0; i < 16; i++)
		{
			temp = arr[i];
			arr[i] = arr[31 - i];
			arr[31 - i] = temp;
		};

		for (i = 0; i < 32; i++)
		{
			cout << arr[i];
		}
	}
	

	cout << "\n";

	return 0;
};	