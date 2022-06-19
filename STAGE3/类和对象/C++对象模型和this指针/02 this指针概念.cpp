#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(10);
	cout << p1.age << endl;

	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << p2.age << endl;
}



int main()
{

	test01();



	system("pause");

	return 0;
}