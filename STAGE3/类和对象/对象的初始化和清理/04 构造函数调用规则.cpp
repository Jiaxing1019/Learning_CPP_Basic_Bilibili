#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//Person()
	//{
	//	cout << "Defaut Constructor" << endl;
	//}
	//Person(int age)
	//{
	//	m_Age = age;
	//	cout << "Constructor with Parameters" << endl;
	//}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Constructor of Copy" << endl;
	}

	~Person()
	{
		cout << "~Deconstructor" << endl;
	}

	int getAge()
	{
		return m_Age;
	}
private:
	int m_Age;
};

//void test01()
//{
//	Person p = 10;
//	cout << "age: " << p.getAge() << endl;
//}

void test02()
{
	Person p;
	cout << "age: " << p.getAge() << endl;
}


int main()
{
	//test01();
	test02();



	system("pause");

	return 0;
}