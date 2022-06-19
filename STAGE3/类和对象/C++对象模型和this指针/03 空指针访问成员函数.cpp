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
		cout << "Age : " << /*this->*/m_Age << endl; // 隐含了this指针
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName(); //空指针，可以调用成员函数
	p->showPersonAge(); //但是如果成员函数中用到了this指针，就不可以了
}


int main()
{

	test01();



	system("pause");

	return 0;
}