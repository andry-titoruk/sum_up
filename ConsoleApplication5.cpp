#include <iostream>

int getInteger();

int main()
{
	int x = getInteger();
	int y = getInteger();

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}

/*#include <iostream>
using namespace std;

int b;
int y;

int doubleNumber(int a, int x)
{
	return a * 2 / x;
}

int main()
{
	cout << "Enter b:\n" << endl;
	cin >> b;
	
	cout << "Enter y:\n" << endl;
	cin >> y;


	cout << doubleNumber(y, b) << endl;

	return 0;
}*/