#include "Header.h"
using namespace std;


void BubbleSort(int* values, int count)
{
	cout << "Bubble sort \n";

	bool not_sorted = true;
	int temp = 0;//временная переменная для хранения сортируемого элемента

	while (not_sorted)
	{
		not_sorted = false;

		for (int i = 0; i < count - 1; i++)
		{
			if (values[i] < values[i - 1]) {

				temp = values[i];
				values[i] = values[i - 1];
				values[i - 1] = temp;
				not_sorted = true;
			}

		}
	}
}