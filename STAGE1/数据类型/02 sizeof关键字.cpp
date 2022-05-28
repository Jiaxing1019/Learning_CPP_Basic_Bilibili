#include <iostream>

using namespace std;

int main()
{
	//整形
	//1. 短整型 （-32768 ~ 32767）

	short num1 = 32768;

	int num2 = 32767;

	long num3 = 10;

	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	cout << "short 占用的内存空间为：" << sizeof(short) << endl;
	cout << "num2 占用的内存空间为：" << sizeof(num2) << endl;
	cout << "int 占用的内存空间为：" << sizeof(int) << endl;
	cout << "long 占用的内存空间为：" << sizeof(long) << endl;
	cout << "long long 占用的内存空间为：" << sizeof(long long) << endl;

	system("pause");

	return 0;
}