#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}

	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	Person p(30, 20, 10);
	
	cout << p.m_A <<"\t" << p.m_B << "\t" << p.m_C << "\t" << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}