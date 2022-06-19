#include <iostream>
#include <string>
using namespace std;
#include <fstream>

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "FILE OPEN Failed" << endl;
		return;
	}
	Person p;

	ifs.read((char*)&p, sizeof(Person));

	ifs.close();


	cout << "Name: " << p.m_Name << endl<<  "Age: " << p.m_Age << endl;
}

int main()
{

	test01();


	system("pause");

	return 0;
}