#pragma once
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//void
//Selection sort
void selectionSort(int* arr, int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array  
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);
    }
}
//return type array
int* selection(int* arr, int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array  
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);
    }
    return arr;


}
//Bubble sort
//void 
void bubbleSort(int* arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place  
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
//return type array
int* bubble(int* arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place  
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    return arr;
}
// Insertion sort 
// void
void insertionSort(int* arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// return type array
int* insertion(int* arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

//shell sort void
void shellSort(int* arr, int n)
{
    // Start with a big gap, then reduce the gap 
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size. 
        // The first gap elements a[0..gap-1] are already in gapped order 
        // keep adding one more element until the entire array is 
        // gap sorted  
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted 
            // save a[i] in temp and make a hole at position i 
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct  
            // location for a[i] is found 
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            //  put temp (the original a[i]) in its correct location 
            arr[j] = temp;
        }
    }
}
//return type array
int* shell(int* arr, int n)
{
    // Start with a big gap, then reduce the gap 
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size. 
        // The first gap elements a[0..gap-1] are already in gapped order 
        // keep adding one more element until the entire array is 
        // gap sorted  
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted 
            // save a[i] in temp and make a hole at position i 
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct  
            // location for a[i] is found 
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            //  put temp (the original a[i]) in its correct location 
            arr[j] = temp;
        }
    }
    return arr;
}

//cocktail sort void
void cocktailSort(int* a, int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        // reset the swapped flag on entering
        // the loop, because it might be true from
        // a previous iteration.
        swapped = false;

        // loop from left to right same as
        // the bubble sort
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                swapped = true;
            }
        }

        // if nothing moved, then array is sorted.
        if (!swapped)
            break;

        // otherwise, reset the swapped flag so that it
        // can be used in the next stage
        swapped = false;

        // move the end point back by one, because
        // item at the end is in its rightful spot
        --end;

        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                swapped = true;
            }
        }

        // increase the starting point, because
        // the last stage would have moved the next
        // smallest number to its rightful spot.
        ++start;
    }
}
//cocktail sort void
int* cocktail(int* a, int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        // reset the swapped flag on entering
        // the loop, because it might be true from
        // a previous iteration.
        swapped = false;

        // loop from left to right same as
        // the bubble sort
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                swapped = true;
            }
        }

        // if nothing moved, then array is sorted.
        if (!swapped)
            break;

        // otherwise, reset the swapped flag so that it
        // can be used in the next stage
        swapped = false;

        // move the end point back by one, because
        // item at the end is in its rightful spot
        --end;

        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                swapped = true;
            }
        }

        // increase the starting point, because
        // the last stage would have moved the next
        // smallest number to its rightful spot.
        ++start;
    }
    return a;
}
//pancake sort
void flip(int* arr, int i)
{
    int temp, start = 0;
    while (start < i)
    {
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start++;
        i--;
    }
}

// Returns index of the 
// maximum element in 
// arr[0..n-1] 
int findMax(int* arr, int n)
{
    int mi, i;
    for (mi = 0, i = 0; i < n; ++i)
        if (arr[i] > arr[mi])
            mi = i;
    return mi;
}

// The main function that 
// sorts given array using 
// flip operations 
void pancakeSort(int* arr, int n)
{
    // Start from the complete 
    // array and one by one 
    // reduce current size 
    // by one 
    for (int curr_size = n; curr_size > 1;
        --curr_size)
    {
        // Find index of the 
        // maximum element in 
        // arr[0..curr_size-1] 
        int mi = findMax(arr, curr_size);

        // Move the maximum 
        // element to end of 
        // current array if 
        // it's not already 
        // at the end 
        if (mi != curr_size - 1)
        {
            // To move at the end, 
            // first move maximum 
            // number to beginning 
            flip(arr, mi);

            // Now move the maximum 
            // number to end by 
            // reversing current array 
            flip(arr, curr_size - 1);
        }
    }
}
