#pragma once
#include <iostream>
using namespace std;

void SelectionSort(int* values, int count);
void BubbleSort(int* values, int count);
void InsertionSort(int* values, int count);
void QuickSort(int* values, int start, int end);
int max(int* values, int count);
int min(int* values, int count);
int FindMedian(int* values, int count);