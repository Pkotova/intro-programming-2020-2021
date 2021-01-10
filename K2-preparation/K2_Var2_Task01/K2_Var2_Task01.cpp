#include <iostream>
/*
    Да се напише програма, която въвежда квадратна матрица от цели числа с размер nxn (n също
    се въвежда от клавиатурата), след което намира произведението на елементите на главния и
    второстепенния диагонал (центърът да се брои само веднъж). Да се провери дали сред
    цифрите на резултата има негов делител.
    Пример:
    Вход:
    1 2 3
    4 5 6
    7 8 9
    Изход:
    945 % 9 || % 4 || % 5
    Yes
    (обяснение: 1 * 5 * 9 * 3 * 7 = 945 => да, защото 5 е делител)

    3 4 9 
    5 2 3
    7 8 1
    6 * 63 = 378 

    b) .. Да се провери дали всички цифри от резулта са делители
*/
/*
* 1. void input
* 2. product of diagonals
* 3. isDigitDividor
*/

/*  
*   00 01 02
*   10 11 12
*   20 21 22
*/
/*
* 1. ПО главния диагонал (i == j)
* 2. ПО и ПОД главния диагонал (i >= j)
* 3. ПОД главния диагонал ( i > j)
* 4. ПО и НАД главния диагонал (i <= j)
* 5. НАД главния диагонал (i < j)

* 6. ПО втостепенния диагонал ( i + j == n - 1)
* 7. ПО и ПОД второстепенния диагонал ( i + j >= n - 1)
* 8. ПОД второстепнния диагонал (i + j > n - 1)
* 9. ПО и НАД второстепенния диагонал ( i + j <= n - 1)
* 10.НАД второстепенния диагонал (i + j < n - 1)
*/
void input(int matrix[100][100], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
int product(int matrix[100][100], int n)
{
    int productMainDiag = 1;
    int productSecondDiag = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                productMainDiag *= matrix[i][j];
            }
            else if (i + j == n - 1)
            {
                productSecondDiag *= matrix[i][j];
            }
        }
    }
    return productSecondDiag * productMainDiag;
}
bool isDigitDividor(int number)
{
    int temp = number;
    while (temp != 0) // 1  2 3 .... 1003344 = true, 0 = false; (number) -> number != 0 
    {
        if (number % (temp % 10) == 0)
        {
            //std::cout << temp % 10 << std::endl;
            return true;
        }
        temp /= 10;
    }
    return false;
}
//b
bool isDigitDiv(int number)
{
    int temp = number;
    while (temp != 0) // 1  2 3 .... 1003344 = true, 0 = false; (number) -> number != 0 
    {
        if (number % (temp % 10) != 0)
        {
            //std::cout << temp % 10 << std::endl;
            return false;
        }
        temp /= 10;
    }
    return true;
}
int main()
{
    int matrix[100][100], n = 3;
    input(matrix, n);
    std::cout << product(matrix, n) << std::endl;
    std::cout << std::boolalpha << isDigitDividor(product(matrix, n)) << std::endl;
    std::cout <<std::boolalpha << isDigitDiv(product(matrix, n)) << std::endl;
}

