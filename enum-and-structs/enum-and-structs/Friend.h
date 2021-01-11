#pragma once
enum gender{male,female, non}; // 0, 1 ....n-1
struct Friend
{
private:
	gender sex;
	char name[32];
	char actor[32];
	int age;
	char job[32];
public:
	Friend(); // default constructor
	Friend(gender sex, const char* name, const char* actor, int age, const char* job);
	// параметричен конструктор, конструктор с параметри, конструктор за общо ползване
	void setGender(gender sex);
	gender getGender();

	void setName(const char* name);
	char* getName();

	void setActor(const char* actor);
	char* getActor();

	void setAge(int age);
	int getAge();

	void setJob(const char* job);
	char* getJob();
		
	void print();
	void input();
};

