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
	Person p = { "Jim", 18 };
	
	ofstream ofs("person.txt", ios::out | ios::binary);

	ofs.write((const char*)&p, sizeof(p));

	ofs.close();

}




int main()
{

	test01();



	system("pause");

	return 0;
}