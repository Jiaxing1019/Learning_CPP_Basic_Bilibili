#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Call Default Constructor" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height); // ����new int() �ķ��������ǵ�ַ?��
		
		cout << "Call Constructor with Parameters " /*<< (int*)&m_Age*/ <<endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age; //ǳ����
		// m_Height = p.m_Height // ǳ����
		m_Height = new int(*p.m_Height); // ���
		
		cout << "Call Constructor of Copy " /*<< (int*)&m_Age*/ << endl;
	}
	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		
		cout << "Call Deconstructor " /*<< (int*)&m_Age*/ << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(10, 160);
	Person p2(p1);

	cout << "p1 age: " << p1.m_Age << ", p1 Height: " << *p1.m_Height << endl;
	cout << "p2 age: " << p2.m_Age << ", p2 Height: " << *p2.m_Height << endl;

}



int main()
{

	test01();



	system("pause");

	return 0;
}