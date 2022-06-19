#include <iostream>
#include <string>
using namespace std;


class Base
{
public:
	virtual void func() = 0;
};

class Son :public Base
{
public:
	void func() {};
};

void test01()
{
	//Base base;
	//new Base;
	Base* base = new Son;
	base->func();
	delete base;
}

int main()
{
	test01();




	system("pause");

	return 0;
}