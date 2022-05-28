#include <iostream>
using namespace std;

int main()
{
	char ch = 'a';
	cout << ch << endl;
	
	cout << "char 占用内存空间" << sizeof(ch) << endl;

	cout << (int)ch << endl;

	char ch2 = 97;

	cout << ch2 << endl;
	cout << (int)'b' << endl;

	system("pause");

	return 0;
}