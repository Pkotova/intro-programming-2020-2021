#include <iostream>
bool isSubStr(char* brand,  char* watch)
// Rolex
// Rolex hto1234
{
	int i = 0;
	while (watch[i] != ' ')
	{
		if (watch[i] != brand[i])
		{
			return false;
		}
		i++;
	}
	return true;
}
void model(char* watch)
{
// Rolex hto1234
	int i = 0;
	while (watch[i] != ' ')
	{
		i++;
	}
	for (size_t j = i +1 ; watch[j] != '\0'; j++)
	{
		std::cout << watch[j];
	}
}
int main()
{
	char brand[32];
	std::cin >> brand;
	 char watch1[32] = "Rolex sh546";
	 char watch2[32]= "Casio gShock";
	 char watch3[32] = "Bretling 123hut";

	 char* watches[3];
	// char** watches;

	 watches[0] = watch1;
	 watches[1] = watch2;
	 watches[2] = watch3;

	 for (size_t i = 0; i < 3; i++)
	 {
		 if (isSubStr(brand,watches[i]))
		 {
			 model(watches[i]);
		 } 
	 }
}
