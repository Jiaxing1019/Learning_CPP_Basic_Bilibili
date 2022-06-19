#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	//成员函数实现 + 号运算符重载
	Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//运算符重载发生函数重载
	Person operator+(int num)
	{
		Person temp;
		temp.m_A = this->m_A + num;
		temp.m_B = this->m_B + num;
		return temp;
	}

public:
	int m_A;
	int m_B;
};

Person::Person()
{
	m_A = 10;
	m_B = 10;
}

//全局函数实现 + 号运算符重载
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}


//运算符重载可以发生 函数重载
//Person operator+(Person& p, int num)
//{
//	Person temp;
//	temp.m_A = p.m_A + num;
//	temp.m_B = p.m_B + num;
//	return temp;
//}

void test01()
{
	Person p1;
	Person p2;

	Person p3 = p1 + p2;
	//相当于：
	//Person p3 = p1.operator+(p2);
	//Person p3 = operator+(p1, p2);
	cout << p3.m_A << endl;
	cout << p3.m_B << endl;

	Person p4 = p1 + 100;
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;

}

int main()
{
	test01();



	system("pause");

	return 0;
}