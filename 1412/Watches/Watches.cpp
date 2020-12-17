#include <iostream>
bool isChronograph(char* watch)
{
	int i = 0;
	while (watch[i] != ' ')
	{
		i++;
	}
	// i = ' ' Rolex 34hgtu2938
	for (size_t j = i + 1 ; watch[j] != '\0'; j++)
	{
		if (watch[j] == 'h')
		{
			return true;
		}
	}
	return false;
}
int main()
{
	char brandModel[50];
	char* watch = brandModel;

	for (size_t i = 0; i < 5; i++)
	{
		std::cin.getline(brandModel, 50);
		std::cout << brandModel << ": "
			<< std::boolalpha
			<< isChronograph(watch)
			<< std::endl;
	}

	std::cout << brandModel << ": " 
		<< std::boolalpha 
		<< isChronograph(watch)
		<< std::endl;

	std::cout << brandModel 
		<< ": " << std::boolalpha
		<< isChronograph(brandModel)
		<< std::endl;

	/*
   // низове 
	char* name;			// неограничен брой символи
	// масив от чарове (символи)
	char familyname[32];//31 + '\0'
	// Разликата между масив от символи и низ 
	// - При низа ние не се грижим за заделянето 
	// на памет за '\0' 

	char subitem[10] = "table";
	char* item = subitem;
	std::cout << item << std::endl; // table
	std::cout << item[4] << std::endl; // e
	std::cout << *item << std::endl;
	std::cout << &item << std::endl; // adress item
	std::cout << &*item << std::endl;
	std::cout << *&item << std::endl;
	std::cout << **&item << std::endl;
	std::cout << &**&item << std::endl;
	std::cout << &subitem << std::endl; // adress subitem

	//int a = 5;
	//const int* ptr = &a; // da
	// const int* ptr = 5; // ne
	const char* trala = "Tralal"; // da
	//int* trp = { 1,3,4 };		 // ne
	//const int* trp = { 1,3,4 };	 // ne
	int b[5] = { 1,2,3,4,5 };
	//int* arr = &b;	//ne
	int* arr = b;
	std::cout << "______________" << std::endl;
	std::cout << *(b+3) << std::endl;
	std::cout << arr[4] << std::endl;
	std::cout << &arr[4] << std::endl;
	std::cout << *&arr[4] << std::endl; 
	std::cout << &*&arr[4] << std::endl; // adresa 4
	std::cout << &arr << std::endl;  // adresa na pointers
	std::cout << &b << std::endl; // адреса на първия елемент от масива
	std::cout <<"Адреса на [0]:" <<&arr[0] << std::endl;
	std::cout << "______________" << std::endl;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << i <<":" <<&(arr[i]) << std::endl;
	}
*/

}

