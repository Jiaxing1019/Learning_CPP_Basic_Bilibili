#include <iostream>
#include <string>

using namespace std;

int main()
{
//1. C style
	char str1[] = "hello world";
	cout << sizeof(str1) << endl;
	cout << str1 << endl;

//2.C++ style
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}