#include <iostream>
#include <string>
using namespace std;


class Phone
{
public:
	Phone(string pname)
	{
		m_PName = pname;
		cout << "Phone()" << endl;
	}

	~Phone()
	{
		cout << "~Phone()" << endl;
	}

	string m_PName;
};

class Person
{
public:
	Person(string name, string pname) : m_Name(name), p_PName(pname) // ��ʼ���б�
	{ 
		cout << "Person()" << endl; 
	}
	~Person()
	{
		cout << "~Person()" << endl;
	}
	string m_Name;
	//Phone p_PName = pname; // ��ʽ���취 //Phone p_PName(pname); 
	Phone p_PName;
};


void test01()
{
	Person p("Jim", "iPhone");
	cout << p.m_Name << " uses " << p.p_PName.m_PName << endl;
}

int main()
{

	test01();



	system("pause");

	return 0;
}