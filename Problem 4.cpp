#include <iostream>
using namespace std;

void swap(int* temp1, int* temp2)
{
	int temp3 = *temp1;
	*temp1 = *temp2;
	*temp2 = temp3;
}

void BUBBLE_SORT(int* array, int size)
{

	for (int i = 0; i < size - 1; i++)
	{

		for (int j = 0; j < size - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
int main()
{
	int SIZE;
	cout << "Enter Array Size = ";
	cin >> SIZE;
	int* arr = new int[SIZE];

	cout << endl;
	cout << "Enter Array Elements = " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin>> arr[i];
	}

	cout << endl;
	cout << "Array Before Sorting = " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	BUBBLE_SORT(arr, SIZE);

	cout << endl;
	cout << "Array After Sorting = " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

