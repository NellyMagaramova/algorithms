#include "Header.h"

int main(int argc, char* argv[]) {

	int N;
	cout << "enter the size of the array: \n";
	cin >> N;

	int *a = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}

	cout << "result \n";

	//нет смысла выводить массив после вызова каждой функции
	//потому что массив будет уже отсортирован
	//и поэтому вызываем функции поотдельности

	//SelectionSort(a);
	
	//BubbleSort(a);

	//InsertionSort(a);

	QuickSort(a, 0, N-1);

	for (int i = 0; i < N; i++) {
		cout << a[i];

	}
	cout << "\n";
	cout << "\n max element " << max(a);
	 
	cout << "\n min element " << min(a);
	cout << "\n";
	delete[] a;
	system("pause");
	return 0;
}