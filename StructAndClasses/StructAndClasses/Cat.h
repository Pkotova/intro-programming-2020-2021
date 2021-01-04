#pragma once
struct Cat
{
private: // нужни продукти
	int age;
	int height;
	int weight;
	bool gender;
public: // начин на приготвяне
	Cat(); // default constructor 
// mutators 
	void setAge(int _age);
	void setHeight(int _height);
	void setWeight(int _weight);
	void setGender(bool _gender);

	int getAge();
	int getHeight();
	int getWeight();
	bool getGender();

	void print();
};

