#pragma once

void recurBubbleSort(int* arr, int n)
{
	if (n == 1) return;
	for (int i = 0; i < n -1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(&arr[i], &arr[i + 1]);
		}
	}
	recurBubbleSort(arr, n - 1);
}
int* recurBubble(int* arr, int n)
{
	if (n == 1) return arr;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(&arr[i], &arr[i + 1]);
		}
	}
	recurBubble(arr, n - 1);
}
int minIndex(int* arr, int i, int j)
{
	if (i == j)
		return i;
	int k = minIndex(arr, i + 1, j);
	return (arr[i] < arr[k]) ? i : k;
}
void recurSelection(int* arr, int n, int index = 0 )
{
	if (index == n) return;
	int k = minIndex(arr,index,n-1);
	if (k != index)
	{
		swap(&arr[k], &arr[index]);
	}
	recurSelection(arr, n, index + 1);
}
int *  rSelection(int* arr, int n, int index = 0)
{
	if (index == n) return arr;
	int k = minIndex(arr, index, n - 1);
	if (k != index)
	{
		swap(&arr[k], &arr[index]);
	}
	rSelection(arr, n, index + 1);
}