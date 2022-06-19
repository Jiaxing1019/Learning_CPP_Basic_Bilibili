#include <iostream>
#include <string>
using namespace std;

class Person
{
	friend void test01();
public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	Person(Person& p)
	{
		m_Age = new int(*p.m_Age);
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	Person& operator=(Person& p) ///[Question] "&" ??? 
		//Answer：返回值为新的实例   化对象是将亡值，不可作为新的函数调用时作为被引用的地址。
		//而返回值是引用时，则是原对象的引用
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		return *this;
	}
private:
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(p2);
	p3 = p2 = p1;

	cout << "p1's age:  " << *p1.m_Age << endl;
	cout << "p2's age:  " << *p2.m_Age << endl;
	cout << "p3's age:  " << *p3.m_Age << endl;

}

int main()
{

	test01();

	system("pause");

	return 0;
}