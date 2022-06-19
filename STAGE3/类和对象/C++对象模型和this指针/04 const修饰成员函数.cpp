#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		m_A = 0;
		m_B = 0;
	}
	void showPerson() const
	{
		//m_A = 10;
		m_B = 10;
	}
	void func1() {}
	int m_A;
	mutable int m_B;
};


void test01()
{
	Person p1;
	p1.showPerson();

	const Person p2; // 创建常对象
	cout << p2.m_A << endl; // 常对象 可以访问 成员变量
	//p2.m_A = 100; // 常对象 不可以修改 成员变量
	p2.m_B = 100; 
	//p2.func1(); // 编译器避免 常对象 借助 成员函数 修改 成员变量
	p2.showPerson();
}


int main()
{

	test01();



	system("pause");

	return 0;
}