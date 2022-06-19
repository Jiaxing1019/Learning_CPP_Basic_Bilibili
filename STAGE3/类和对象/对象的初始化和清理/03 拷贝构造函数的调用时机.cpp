#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Constructor without Parameter" << endl;
		mAge = 0;
	}
	Person(int age)
	{
		cout << "Constructor with Parameter" << endl;
		mAge = age;
	}
	Person(const Person &p)
	{
		cout << "Constructor with Copy" << endl;
		mAge = p.mAge;
	}

	~Person()
	{
		cout << "~Deconstructor" << endl;
	}
private:
	int mAge;
};

void test01()
{
	Person p(10);
	Person np(p);
	//Person np2 = p;
}


void doWork(Person P) {}
void test02()
{
	Person p;
	doWork(p);
}


Person doWork2()
{
	Person p1=10;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	//doWork2();
	
	//Person p = doWork2();
	//Person p2 = p;

	//Person p(doWork2());
	//Person p2(p);

	Person p;
	cout << (int*)&p << endl;
	p = doWork2();
	cout << (int*)&p << endl;
	p = 10;
	cout << (int*)&p << endl;
}


int main()
{
	//test01();
	//test02();
	test03();


	system("pause");

	return 0;
}