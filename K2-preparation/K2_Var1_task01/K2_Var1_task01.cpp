#include <iostream>
/*
     Да се напише програма, която въвежда квадратна матрица от цели числа с размер nxn (n също
    се въвежда от клавиатурата), след което намира сумата от елементите на главния и
    второстепенния диагонал (центърът да се брои само веднъж). Да се провери дали сумата е
    степен на двойката.
    Пример:
    Вход:
    1 2 3
    4 5 6
    7 8 9
    Изход:
    25
    No
    (обяснение: 1 + 5 + 9 + 3 + 7 = 25 => не е степен на двойката)
*/
/*
* 1. функция, която ни помага да въведем матрицата
* 2. функция, която смята сумата по главния и по второстопенния диагонал
* 3. функция, която проверява дали едно число е степен на двойката
*/

void input(int matrix[100][100],int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
int sum(int matrix[100][100], int n)
{
    int sumMainDiag = 0;
    int sumSecondDiag = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j) // условие за елемент да се намира на главния диагонал
            {
                sumMainDiag += matrix[i][j];

            }   
            else if (i + j == n - 1)// условие за елемент да се намира на второстепенния диагонал
            {
                sumSecondDiag += matrix[i][j];
            }
        }
    }
    return sumMainDiag + sumSecondDiag;
}
bool isPowerOfTwo(int number)
{
    if (number == 0)
    {
        return false;
    }
    while (number != 1)
    {
        if (number % 2 != 0)
        {
            return false;
        }
        number /= 2;
    }
    return true;
}
int main()
{
    int matrix[100][100];
    int  n = 3;
    input(matrix,n);
    std::cout << "SUM: " << sum(matrix, n) << std::endl;
    int diagonalsSum = sum(matrix, n);
    std::cout << "Result: " <<std::boolalpha <<isPowerOfTwo(diagonalsSum);
}