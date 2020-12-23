#include <iostream>
using namespace std;
int main()
{
	int size=5;
	int sTemp;
	int maxSize1 = 0;
	int maxSize2 = 0;
	int sentinalValue = -1;
	int* arr = new int[size];
	int* arr2 = new int[size];
	int index = 0;
	int loopInput;
	while (1)
	{
		cout << "Press 1 to input into first array" << endl;
		cout << "Press 2 to input into second array" << endl;
		cout << "Press 3 to swap their contents" << endl;
		cout << "Press 4 to display first array" << endl;
		cout << "Press 5 to display second array" << endl;
		cout << "Press 6 to end" << endl;
		cin >> loopInput;
		if (loopInput == 1)
		{
			while (1)
			{
				cout << "Enter element into first array, or Enter -1 to go to next step = " << endl;
				cin >> arr[index];
				if (arr[index] == sentinalValue)
				{
					arr[index] = 0;
					maxSize1 = index;
					break;
				}
				index++;
				if (index >= size)
				{
					sTemp = size;
					size = size * 2;
					int* temp = new int[size];
					for (int i = 0; i < sTemp; i++)
					{
						temp[i] = arr[i];
					}
					delete[] arr;
					arr = temp;
				}
			}
		}
		else if (loopInput == 2)
		{
			index = 0;
			size = 5;
			while (1)
			{
				cout << "Enter element into second array, or Enter -1 to go to next step = " << endl;
				cin >> arr2[index];
				if (arr2[index] == sentinalValue)
				{
					arr2[index] = 0;
					maxSize2 = index;
					break;
				}
				index++;
				if (index >= size)
				{
					sTemp = size;
					size = size * 2;
					int* temp2 = new int[size];
					for (int i = 0; i < sTemp; i++)
					{
						temp2[i] = arr2[i];
					}
					delete[] arr2;
					arr2 = temp2;
				}
			}
		}
		else if (loopInput == 3)
		{
			int* temp3 = arr;
			arr = arr2;
			arr2 = temp3;

			int temp4 = maxSize1;
			maxSize1 = maxSize2;
			maxSize2 = temp4;
			cout << endl;
			cout << "Swap Completed" << endl;
		}
		else if (loopInput == 4)
		{
			index = 0;
			cout << endl;
			cout << "First Array = " << endl;
			while (index < maxSize1)
			{
				cout << arr[index];
				cout << endl;

				index++;
			}
		}
		else if (loopInput == 5)
		{

			index = 0;
			cout << endl;
			cout << "Second Array = " << endl;
			while (index < maxSize2)
			{
				cout << arr2[index];
				cout << endl;

				index++;
			}
		}
		else if (loopInput == 6)
		{
			break;
		}
		else
		{
			cout << endl;
			cout << "Wrong Input,Try Again" << endl;
		}
		system("pause");
		system("cls");
	}

	return 0;
}

