#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	//��Ա����ʵ�� + �����������
	Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//��������ط�����������
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

//ȫ�ֺ���ʵ�� + �����������
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}


//��������ؿ��Է��� ��������
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
	//�൱�ڣ�
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