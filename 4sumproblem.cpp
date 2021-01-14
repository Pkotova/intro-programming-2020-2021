// 4sumproblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool quadTuple(int arr[], int n, int sum, int count)
{
    if (sum == 0 && count == 4)
        return true;
    if (count > 4 || n == 0)
        return false;
    return quadTuple(arr, n - 1, sum - arr[n - 1], count + 1) ||
        quadTuple(arr, n - 1, sum, count);
}

int main()
{
    int arr[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
    int sum = 20;

    int n = sizeof(arr) / sizeof(arr[0]);

    quadTuple(arr, n, sum, 0) ? cout << "Quadruplet Exists" :
        cout << "Quadruplet Don't Exist";

    return 0;
}
