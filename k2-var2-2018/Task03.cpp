#include <iostream>
using namespace std;
int main()
{
	int a, b; 
	do
	{
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;

	} while (!(b - a >= 10));

	for (size_t i = b; i >= a; i--)
	{
		if (i % 10 == 7)
		{
			bool flag = true;
			for (size_t j = 2; j <= i / 2 ; j++)
			{
				if (i % j == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				cout << i << endl;
				break;
			}
		}
	}


}
