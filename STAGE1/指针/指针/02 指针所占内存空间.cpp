#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 10;
	char ch = 'i';
	long l = 10;
	float f = 3.14;
	double d = 3.14;

	int* p1 = &a;
	float* p2 = &f;

	//cout << &a << endl;
	//cout << &f << endl;
	//
	cout << p1 << endl;
	cout << *p1 << endl;
	//
	//cout << &a << endl;
	//cout << &f << endl;

	cout << sizeof(int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;

	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	system("pause");

	return 0;
}