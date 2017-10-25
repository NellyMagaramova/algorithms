#include "Header.h"

using namespace std;

int max(int* values, int count)

{
	
	count << count;
	cout << "\n";
	int max = values[0];
	
	for (int i = 1; i <count;i++) {

		if (values[i] > max) { max = values[i]; }
	
		
	}
	return max;

}

int min(int* values, int count){
	
	int min = values[0];

	for (int i = 1; i <count; i++) {

		if (values[i]<min)min = values[i];


	}
	return min;

}

int FindMedian(int* values, int count) {
	
	for (int i = 0; i < count; i++) {
		//находим количество элементов больших и меньших, чем values[i]

		int num_Larger = 0, num_smaller = 0;

		for (int j = 0; j < count; j++) {
			if (values[j] < values[i]) { num_smaller = num_smaller + 1; }
			else { num_Larger = num_Larger + 1; }

		}
		if (num_smaller == num_Larger) { return values[i]; }


	}


}