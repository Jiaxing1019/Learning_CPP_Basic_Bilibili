#include <iostream>
#include <string>
using namespace std;

class Person
{
public:

	static int m_A;

private:
	
	static int m_B;
};

int Person::m_A = 10;
int Person::m_B = 10;

void test01()
{
	Person p;

	cout << p.m_A << endl;
	//cout << p.m_B << endl; // Unable to read the static variables with private access right

	Person np;
	np.m_A = 20;
	cout << p.m_A << endl;

	cout << Person::m_A << endl;
}



int main()
{
	test01();


	system("pause");

	return 0;
}