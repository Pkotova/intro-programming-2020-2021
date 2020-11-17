#include <iostream>
using namespace std;
const int MAX_SIZE = 64;
int main()
{
    int n = 3; 
    int matrix[MAX_SIZE][MAX_SIZE] = 
    {{1,2,3}
    ,{4,5,6}
    ,{7,8,9}};
/*
    00 01 02 03 {04}
    10 11 12 {13} 14
    20 21 {22} 23 24
    30 {31} 32 33 34
    {40} 41 43 43 44
       
*/
   
// sum of numbers on main diagonal
    int sumMainDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumMainDiagonal += matrix[i][j];
            }
        }
    }
    cout << sumMainDiagonal << endl;

// sum of numbers below main diagonal 
    int sumBelowMainDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i > j)
            {
                sumBelowMainDiagonal += matrix[i][j];
            }
        }
    }

    cout << sumBelowMainDiagonal << endl;

 // sum of numbers above main diagonal 
    int sumAboveMainDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i < j)
            {
                sumAboveMainDiagonal += matrix[i][j];
            }
        }
    }
    cout << sumAboveMainDiagonal << endl;

 // sum of numbers on second diagonal 
    int sumSecondDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i+j == n - 1)
            {
                sumSecondDiagonal += matrix[i][j];
            }
        }
    }
    cout << "Second: ";
    cout << sumSecondDiagonal << endl;

// sum of numbers below second diagonal 
    int sumBelowSecondDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i + j >= n)
            {
                sumBelowSecondDiagonal += matrix[i][j];
            }
        }
    }
    cout << "Second: ";
    cout << sumBelowSecondDiagonal << endl;

 // sum of numbers above second diagonal 
    int sumAboveSecondDiagonal = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i + j <= n - 2)
            {
                sumAboveSecondDiagonal += matrix[i][j];
            }
        }
    }
    cout << "Second: ";
    cout << sumAboveSecondDiagonal << endl;


    bool result = (sumMainDiagonal == sumSecondDiagonal);
    cout << result;
}

