#pragma once
//bubble sort iterative
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// void 
void bubbleSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
// return type array int*
int* bubble(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	return arr;
}
// selection sort iterative
void selectionSort(int* arr, int n)
{
	int min;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);

	}
}
int* selection(int* arr, int n)
{
	int min;
	for (int i = 0; i < n - 1  ; i++)
	{
		min = i;
		for (int j = i + 1 ; j < n ; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
			swap(&arr[i] ,&arr[min]);

	}
	return arr;
}