#include <iostream>
#include <string>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int num1, int num2)
	{
		m_A = num1;
		m_B = num2;
	}

private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream &out, Person &p)
{
	out << "num1 = " << p.m_A << " num2 = " << p.m_B;
	return out;
}

void test01()
{
	Person p(10,10);
	cout << p << endl;

}


int main()
{

	test01();



	system("pause");

	return 0;
}