#include <iostream>

using namespace std;

int main()
{
	//����
	//1. ������ ��-32768 ~ 32767��

	short num1 = 32768;

	int num2 = 32767;

	long num3 = 10;

	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	cout << "short ռ�õ��ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "num2 ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num2) << endl;
	cout << "int ռ�õ��ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "long ռ�õ��ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "long long ռ�õ��ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	system("pause");

	return 0;
}