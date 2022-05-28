#include <iostream>
using namespace std;

int main()
{
	int a = 4;
	int b = 2;
	int c = 3;

	c = a > b ? a : b;

	cout << a << b << c << endl;

	(a > b ? a : b) = 100;
	cout << a << b << c << endl;


	system("pause");
	return 0;

}