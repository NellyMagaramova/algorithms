#include "Header.h"




void InsertionSort(int* values, int count)
{
	int count = sizeof(values) / sizeof(values[0]);
	int temp = 0;//��������� ���������� ��� �������� ������������ ��������
	int j = 0;




	for (int i = 0; i < count - 1; i++) {

		temp = values[i];
		j = i - 1;
		while (j >= 0 && values[j]>temp)//���� �������� ���� "<"  �� ���� ">" ���������� ����� �� �����������
		{
			values[j + 1] = values[j];
			j--;

		}
		values[j + 1] = temp;
	}
	
}