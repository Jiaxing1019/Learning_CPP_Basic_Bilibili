#include <iostream>
#include <string>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myinteger);
public:
	MyInteger(int Num)
	{
		m_Num = Num;
	}
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}
	MyInteger operator++(int)
	{
		MyInteger temp(this->m_Num);
		m_Num++;
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger myinteger)
{
	cout << myinteger.m_Num;
	return cout;
}

void test01()
{
	MyInteger myinteger(0);
	cout << ++myinteger << endl;
	cout << myinteger << endl;
	cout << ++(++myinteger) << endl;
}
void test02()
{
	MyInteger myinteger(0);
	cout << myinteger++ << endl;
	cout << myinteger << endl;
}

int main()
{

	test01();
	//test02();

	system("pause");

	return 0;
}