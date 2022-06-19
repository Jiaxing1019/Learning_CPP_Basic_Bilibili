#include <iostream>
#include <string>
using namespace std;

class Person
{
	int a; // occ
	static int b; // 
	void func1() {}; // 
	static void func2() {}; // 
};
int Person::b = 0;

void test01()
{
	Person p;
	cout << sizeof(p) << endl;
}



int main()
{

	test01();



	system("pause");

	return 0;
}