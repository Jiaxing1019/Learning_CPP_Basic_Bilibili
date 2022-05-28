#include <iostream>

using namespace std;

int main()
{

	//1.单精度 float 4字节 7位有效数字
	//2.双精度 double 8字节 15~16位有效数字
	//默认情况下输出一个小数， 会显示六位有有效数字

	float f1 = 3.1415926f;
	
	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	//size
	cout << "size of f1 : " << sizeof(f1) << endl;
	cout << "size of d1 : " << sizeof(d1) << endl;

	system("pause");

	return 0;
}