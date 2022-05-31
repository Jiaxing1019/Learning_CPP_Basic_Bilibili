#include <iostream>
using namespace std;

//01 值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//02 地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//03 引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a: " << a << " b: " << b << endl;

	a = 10;
	b = 20;

	mySwap02(&a, &b);
	cout << "a: " << a << " b: " << b << endl;

	a = 10;
	b = 20;

	mySwap03(a, b);
	cout << "a: " << a << " b: " << b << endl;

	system("pause");

	return 0;
}