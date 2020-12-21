#pragma once
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// Return minimum index 
int minIndex(int a[], int i, int j)
{
    if (i == j)
        return i;

    // Find minimum of remaining elements 
    int k = minIndex(a, i + 1, j);

    // Return minimum of current and remaining. 
    return (a[i] < a[k]) ? i : k;
}
void recurSelectionSort(int* a, int n, int index = 0)
{
    // Return when starting and size are same 
    if (index == n)
        return;

    // calling minimum index function for minimum index 
    int k = minIndex(a, index, n - 1);

    // Swapping when index nd minimum index are not same 
    if (k != index)
        swap(&a[k], &a[index]);

    // Recursively calling selection sort function 
    recurSelectionSort(a, n, index + 1);
}
void recurBubbleSort(int* arr, int n)
{
    // Base case
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(&arr[i], &arr[i + 1]);

    // Largest element is fixed,
    // recur for remaining array
    recurBubbleSort(arr, n - 1);
}
void recurInsertionSort(int* arr, int n)
{
    // Base case 
    if (n <= 1)
        return;

    // Sort first n-1 elements 
    recurInsertionSort(arr, n - 1);

    // Insert last element at its correct position 
    // in sorted array. 
    int last = arr[n - 1];
    int j = n - 2;

    /* Move elements of arr[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
void heapify(int* arr, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
void recurHeapSort(int* arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(&arr[0], &arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int* recurHeap(int* arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(&arr[0], &arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    return arr;
}
int recurShellSort(int* arr, int length)
{
    if (length <= 1)    return length;
    length = recurShellSort(arr, length - 1);
    int value = arr[length];
    int i = length - 1;
    while ((i >= 0) && (arr[i] > value)) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    return length + 1;
}
int partition(int* arr, int low, int high)
{
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int* arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}