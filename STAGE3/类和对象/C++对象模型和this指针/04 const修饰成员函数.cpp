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

	const Person p2; // ����������
	cout << p2.m_A << endl; // ������ ���Է��� ��Ա����
	//p2.m_A = 100; // ������ �������޸� ��Ա����
	p2.m_B = 100; 
	//p2.func1(); // ���������� ������ ���� ��Ա���� �޸� ��Ա����
	p2.showPerson();
}


int main()
{

	test01();



	system("pause");

	return 0;
}