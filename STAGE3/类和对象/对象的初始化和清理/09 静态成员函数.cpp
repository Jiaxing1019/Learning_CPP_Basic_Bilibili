#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	static void func1()
	{
		m_A = 20;
		cout << "Call static void func1" << endl;
	}
	static int m_A;
	int m_B;
private:
	static void func2()
	{
		cout << "Call static void func2" << endl;
	}
};

int Person::m_A = 10;

void test01()
{
	Person p;
	p.func1();
	//p.func2();
}


int main()
{
	test01();


	system("pause");

	return 0;
}