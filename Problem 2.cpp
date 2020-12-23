#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int loopInput;
	int rows1=0, rows2=0;
	int col1=0, col2=0;
	int** matrix1 = NULL;
	int** matrix2 = NULL;
	int** matrix3 = NULL;
	while (1)
	{
		cout << "Press 1 to input first matrix" << endl;
		cout << "Press 2 to input second matrix" << endl;
		cout << "Press 3 to add them" << endl;
		cout << "Press 4 to multiply them" << endl;
		cout << "Press 5 to print first matrix" << endl;
		cout << "Press 6 to print second matrix" << endl;
		cout << "Press 7 to end" << endl;
		cin >> loopInput;
		if (loopInput == 1)
		{
			cout << "Enter Rows for First Matrix = ";
			cin >> rows1;
			cout << "Enter Cols for First Matrix = ";
			cin >> col1;

			cout << endl;
			cout << "Enter values into Matrix = " << endl;
			matrix1 = new int* [rows1];
			for (int i = 0; i < rows1; i++)
			{
				matrix1[i] = new int[col1];
			}

			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col1; j++)
				{
					cin >> *(*(matrix1 + i) + j);
				}
			}

			cout << endl;
			cout << "Input Successfull" << endl;
		}
		else if (loopInput == 2)
		{
			cout << "Enter Rows for Second Matrix = ";
			cin >> rows2;
			cout << "Enter Cols for Second Matrix = ";
			cin >> col2;

			cout << endl;
			cout << "Enter values into Matrix = " << endl;
			matrix2 = new int* [rows2];
			for (int i = 0; i < rows2; i++)
			{
				matrix2[i] = new int[col2];
			}

			for (int i = 0; i < rows2; i++)
			{
				for (int j = 0; j < col2; j++)
				{

					cin >> *(*(matrix2 + i) + j);
				}
			}

			cout << endl;
			cout << "Input Successfull" << endl;

		}

		else if (loopInput == 3)
		{
			if (rows1 != rows2 || col1 != col2)
			{
				cout << endl;
				cout << "Rows and Columns or both matrixes are not same" << endl;
				cout << "So Addition Operation can not be performed" << endl;
				continue;
			}
			matrix3 = new int* [rows1];
			for (int i = 0; i < rows1; i++)
			{
				matrix3[i] = new int[col1];
			}

			for (int i = 0; i < rows1; ++i)
			{
				for (int j = 0; j < col1; ++j)
				{
					*(*(matrix3 + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
				}
			}

			cout << "Addition Result using a third matrix = " << endl;
			cout << endl;
			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col1; j++)
				{

					cout << setw(3) << *(*(matrix3 + i) + j) << " ";
				}
				cout << endl;
			}
		}
		else if (loopInput == 4)
		{
			if (col1 != rows2 )
			{
				cout << endl;
				cout << "Matrix Multiplication cannot be performed because" << endl;
				cout << "Cols of First Matrix is not equal to Rows of Second Matrix " << endl;
				continue;
			}

			matrix3 = new int* [rows1];
			for (int i = 0; i < rows1; i++)
			{
				matrix3[i] = new int[col2];
			}

			for (int i = 0; i < rows1; ++i)
				for (int j = 0; j < col2; ++j)
				{
					*(*(matrix3 + i) + j) = 0;
				}


			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col2; ++j)
				{
					for (int k = 0; k < col1; ++k)
					{
						*(*(matrix3 + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
						
					}
				}
			}
			cout << "Multiplication Result using a third matrix = " << endl;
			cout << endl;
			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col2; j++)
				{

					cout << setw(3) << *(*(matrix3 + i) + j) << " ";
				}
				cout << endl;
			}
		}
		else if (loopInput == 5)
		{
			cout << endl;
			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col1; j++)
				{

					cout << setw(3) << *(*(matrix1 + i) + j) << " ";
				}
				cout << endl;
			}
		}

		else if (loopInput == 6)
		{
			cout << endl;
			for (int i = 0; i < rows1; i++)
			{
				for (int j = 0; j < col1; j++)
				{

					cout << setw(3) << *(*(matrix2 + i) + j) << " ";
				}
				cout << endl;
			}

		}
		else if (loopInput == 7)
		{
			break;
		}

		system("pause");
		system("cls");


	}
	return 0;
} 

