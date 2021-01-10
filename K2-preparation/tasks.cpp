#include <iostream>
using namespace std;
const int MAXSIZE = 128;
//Задача 2.Две изречения са анаграми едно на друго, ако съдържат еднакъв брой букви(английски) ивсяка буква от едното изречение се среща еднакъв брой пъти и в двете изречения.
//Не правимразлика между главни и малки английски букви.Примери: “Astronomer” и “Moon starer”; “A B B A” и “baba”.Напишете функция, която по два символни низа, съдържащи
//английски букви и евентуалноинтервали, проверява дали двата низа са анаграми един на друг.
 
//1. Функция, която прави всички букви големи -- за да направим низа с малки букви, трябва ако буквата е малка, да извадим 32
//2. Функция, която приема низ и го сортира във възходящ ред
//3. Функция, която премахва символите, различни от главни букви
//3. Функция, която проверява дали те са еднакви
 
void swap(char& a, char& b)
{
	char c = a;
	a = b;
	b = c;
}
 
int len(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
void makeUpper(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
}
 
void sort(char* str)
{
	int i = 0;
	while (str[i + 1] != '\0')
	{
		for (int j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] > str[j])
			{
				swap(str[i], str[j]);
			}
		}
		i++;
	}
}
//5342 542
void removeNonLetters(char* str)
{
	int i = 0;
	int length = len(str);
	int counterOfRemovedElements = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			for (int j = i; j < length; j++)
			{
				str[j] = str[j + 1];
			}
			counterOfRemovedElements++;
			str[length - counterOfRemovedElements] = '\0';
			i--;
		}
		i++;
	}
}
 
bool isTwoStringsEqual(char* str1, char* str2)
{
	bool areEqual = true;
	if (len(str1) != len(str2))
	{
		return false;
	}
	else
	{
		int i = 0;
		while (str1[i] != '\0')
		{
			if (str1[i] != str2[i])
			{
				areEqual = false;
			}
			i++;
		}
	}
	return areEqual;
}
/* Второ контролно по УП на ИС13.01.2019 г.Вариант 2Задача 1.Да се напише програма, която въвежда квадратна матрица от цели числа с размер nxn(n същосе въвежда от
 клавиатурата), след което намира произведението на елементите на главния ивторостепенния диагонал(центърът да се брои само веднъж).Да се провери дали средцифрите на
 резултата има негов делител.Пример:Вход:1 2 34 5 67 8 9Изход : 945Yes(обяснение : 1 * 5 * 9 * 3 * 7 = 945 = > да, защото 5 е делител)Задача 2.Да се напише функция, която
 по дадени два символни низа проверява дали са изпълнениедновременно следните две условия : -множеството от различните символи на единия низ е същото като множеството
 от символи на втория низ - всеки символ от втория низ се среща поне толкова пъти във втория низ, колкото се среща и впървия.Не правим разлика между главни и малки
 английски букви.Примери : “Aab” и “baBa”->да“forty five” и “over fifty”->да*/
 //1.Функция, която прави всички големи или висчки малки
 //2.Функция, която ни брои срещанията на буквиете в масивите
 //3.Функция, която срявнява масивите с броя на срещанията
 
void countRepeats(char* str, int* repeats)
{
	int length = len(str);
	for (int i = 0; i < length; i++)
	{
		repeats[(str[i]) - 'A']++;
	}
}
 
bool isSubset(int* repeats, int* repeats2)
{
	for (int i = 0; i < 26; i++)
	{
		if (repeats2[i] < repeats[i])
		{
			return false;
		}
	}
	return true;
}
 
double multipilication(double* arr, int len)
{
	if (len == 2)
	{
		if (arr[1] < arr[0] && arr[1]>0)
		{
			return arr[1];
		}
		return 1;
	}
	double temp = 1;
	if (arr[1] < arr[0] && arr[1]>0)
	{
		temp = arr[1];
	}
	return multipilication(arr + 1, len - 1) * temp;
}
 
double sum(double* arr, int len)
{
	if (len == 2)
	{
		if (arr[0] > arr[1] && arr[0] > 0)
		{
			return arr[0];
		}
		return 0;
	}
	double temp = 0;
	if (arr[0] > arr[1] && arr[0] > 0)
	{
		temp = arr[0];
	}
	return temp + sum(arr + 1, len - 1);
}
int main()
{
	double arr[MAXSIZE] = { 2, -1.9, 1.1, 3.5, 1, 0, 8.3 };
	cout << sum(arr, 7);
}