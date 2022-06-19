#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Contructor without parameters" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Contructor with parameters" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "Constructor Copy" << endl;
	}

	~Person()
	{
		cout << "Decontructor" << endl;
	}

public:
	int age = 0;
};


void test01()
{
	Person p;
}

void test02()
{
	////括号
	//Person p1;
	////Person P1(); //函数声明 
	//Person p2(10);
	//Person p3(p2);

	////显示
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);


	////隐式
	//Person p1;
	//Person p2 = 10;
	//Person p3 = p2;
	Person(10); // 匿名对象
	//Person(p3); //对象声明
}

int main()
{

	//test01();
	test02();


	system("pause");

	return 0;
}