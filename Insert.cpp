#include "Header.h"




void InsertionSort(int* values, int count)
{
	int count = sizeof(values) / sizeof(values[0]);
	int temp = 0;//временная переменная для хранения сортируемого элемента
	int j = 0;




	for (int i = 0; i < count - 1; i++) {

		temp = values[i];
		j = i - 1;
		while (j >= 0 && values[j]>temp)//если изменить знак "<"  на знак ">" сортировка будет по возрастанию
		{
			values[j + 1] = values[j];
			j--;

		}
		values[j + 1] = temp;
	}
	
}