#include <iostream>
using namespace std;


//���������ã�ת��Ϊ int* const ref = &a;
void func(int& ref) 
{
	ref = 100; // ref�����ã�ת��Ϊ*ref = 100
}

int main()
{

	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	
	// int a = 10;
	// int b = 20;
	// //int& c = a;
	// int* const c = &a;
	// 
	// *c = b;
	// 
	// cout << "a= " << a << endl;
	// cout << "b= " << b << endl;
	// cout << "c= " << *c << endl;
	// 
	system("pause");

	return 0;
}
