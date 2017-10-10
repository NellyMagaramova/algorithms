#include "Header.h"

using namespace std;

int max(int* values)
{
	int count = sizeof(values) / sizeof(values[0]);
	int max = values[0];
	
	for (int i = 1; i <count; i++) {

		if(values[i]>max)max = values[i];
	
		
	}
	return max;

}

int min(int* values)
{
	int count = sizeof(values) / sizeof(values[0]);
	int min = values[0];

	for (int i = 1; i <count; i++) {

		if (values[i]<min)min = values[i];


	}
	return min;

}