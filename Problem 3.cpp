#include<iostream>
using namespace std;
int main()
{
    int size;
    int max, min;
    int* arr = NULL;
    int loopInput = 0;
    while (1)
    {
        cout << "Press 1 to Enter size and elements into array" << endl;
        cout << "Press 2 to Calculate and Show Maximum Value" << endl;
        cout << "Press 3 to Calculate and Show Minimun Value" << endl;
        cout << "Press 4 to end" << endl;
        cin >> loopInput;
        if (loopInput == 1)
        {
            cout << "Enter the size of Array =  ";
            cin >> size;
            arr = new int[size];

            cout << "Enter Array Elements = ";
            for (int i = 0; i < size; i++)
                cin >> arr[i];
        }

        else if (loopInput == 2)
        {
            max = arr[0];
            for (int i = 0; i < size; i++)
            {
                if (max < arr[i])
                    max = arr[i];
            }
            cout << endl;
            cout << "Maximum value = " << max << endl;
        }
        else if (loopInput == 3)
        {
            min = arr[0];
            for (int i = 0; i < size; i++)
            {
                if (min > arr[i])
                    min = arr[i];
            }
            cout << endl;
            cout << "Maximum value = " << min << endl;
        }
        else if (loopInput == 4)
        {
            break;
        }
        system("pause");
        system("cls");


    }
    return 0;
}

