#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	bool operator==(Person& p)
	{
		return m_Name == p.m_Name && m_Age == p.m_Age ?  true:  false;
	}
	bool operator!=(Person& p)
	{
		return m_Name == p.m_Name && m_Age == p.m_Age ? false : true;
	}
private:
	string m_Name;
	int m_Age;
};


void test01()
{
	Person p1("Jim", 18);
	Person p2("Jim", 18);

	if (p1 == p2)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}

	if (p1 != p2)
	{
		cout << "Different" << endl;
	}
	else
	{
		cout << "Same" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}