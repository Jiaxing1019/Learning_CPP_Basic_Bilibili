#include <iostream>
#include <string>
using namespace std;

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


void test01()
{
	MyAdd myadd;
	int ret = myadd(1, 2);
	
	cout << ret << endl;
}
void test02()
{
	cout << MyAdd()(1, 2) << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}