#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
	void showClassName()
	{
		cout << "Class Name : Person " << endl;
	}
	void showPersonAge()
	{
		if (this == NULL) //increase robustness
		{				  
			return;		  
		}				  
		cout << "Age : " << /*this->*/m_Age << endl; // ������thisָ��
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName(); //��ָ�룬���Ե��ó�Ա����
	p->showPersonAge(); //���������Ա�������õ���thisָ�룬�Ͳ�������
}


int main()
{

	test01();



	system("pause");

	return 0;
}