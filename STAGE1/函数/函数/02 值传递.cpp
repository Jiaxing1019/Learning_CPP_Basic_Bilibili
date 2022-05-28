#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
	cout << "before swap : " << num1 << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "after swap : " << num1 << num2 << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl; // 函数定义中形参的值改变， 不会影响到实参

	system("pause");
	return 0;
}