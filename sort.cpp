//BUBBLE SORT
//BUBBLE SORT
//BUBBLE SORT
//BUBBLE SORT
//BUBBLE SORT
//BUBBLE SORT
//BUBBLE SORT


/*#include <iostream>

using namespace std;

int main()
{
	int* arr; 
	int size; 

	cout << "n = ";
	cin >> size;

	if (size <= 0) 
	{
		cerr << "Invalid size" << endl;
		return 1;
	}

	arr = new int[size]; 

	for (int i = 0; i < size; i++) 
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int temp; 

	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;

	return 0;
}*/



//QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT 
//QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT 
//QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT 
//QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT QUICK SORT 

#include <iostream>
#include "qs.h"
using namespace std;


void print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "-";
	}
	cout << endl;
}

int main()
{
	int n;

	int i;
	cout << "Array Size: ";
	cin >> n;
	cout << endl;
	int* arr = new int[n];
	for (i = 0; i < n; i++) {
		cout << "Array[" << i + 1 << "]: ";
		cin >> arr[i];
		cout << endl;
	}
	print(arr, n);
	quickSort(arr, 0, n - 1);
	print(arr, n);

}

/*OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER 
OUT OF ORDEROUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER 
OUT OF ORDEROUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER 
OUT OF ORDEROUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER 
OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER OUT OF ORDER */























