#include <iostream>
#include <string>
using namespace std;


class Animal
{
public:
	virtual void Speak()
	{
		cout << "ANIMAL says" << endl;
	}
};

class Dog : public Animal
{
public:
	void Speak()
	{
		cout << "DOG says" << endl;
	}
};

class Cat : public Animal
{
public:
	void Speak()
	{
		cout << "CAT says" << endl;
	}
};

void DoSpeak(Animal& animal)
{
	animal.Speak();
}

void test01()
{
	Dog dog;
	DoSpeak(dog);
	Cat cat;
	DoSpeak(cat);
}

int main()
{

	test01();



	system("pause");

	return 0;
}