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

	//��� ������ �������� ������ ����� ������ ������ �������
	//������ ��� ������ ����� ��� ������������
	//� ������� �������� ������� �������������

	//SelectionSort(a, N);
	
	//BubbleSort(a, N);

	//InsertionSort(a, N);

	QuickSort(a, 0, N-1);

	for (int i = 0; i < N; i++) {
		cout << a[i];

	}
	cout << "\n";
	cout << "\n max element " << max(a,N);
	 
	cout << "\n min element " << min(a, N);
	cout << "\n";
	system("pause");
	return 0;
}