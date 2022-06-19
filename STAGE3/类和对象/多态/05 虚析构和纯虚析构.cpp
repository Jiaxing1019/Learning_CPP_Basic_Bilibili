#include <iostream>
#include <string>
using namespace std;


class Animal
{
public:
	virtual void Speak() = 0;
	Animal()
	{
		cout << "CALL CONSTRUCTOR of Animal" << endl;
	}
//ÐéÎö¹¹ 
	//virtual ~Animal()
	//{
	//	cout << "CALL DECONSTRUCTOR of Animal" << endl;
	//}
//´¿ÐéÎö¹¹
	virtual ~Animal() = 0;
};

Animal::~Animal() 
{
	cout << "CALL DECONSTRUCTOR of Animal" << endl;
};

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "CALL CONSTRUCTOR of Cat" << endl;
		m_Name = new string(name);
	}
	virtual void Speak()
	{
		cout << *m_Name << "CAT Says" << endl;
	}
	~Cat()
	{
		cout << "CALL DECONSTRUCTOR of Cat" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};


void test01()
{
	Animal* animal = new Cat("Kitty");
	animal->Speak();

	delete animal;
	animal = NULL;
}
int main()
{

	test01();

	system("pause");

	return 0;
}