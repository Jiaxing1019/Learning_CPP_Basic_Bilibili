#include <iostream>

using namespace std;

int main()
{

	//1.������ float 4�ֽ� 7λ��Ч����
	//2.˫���� double 8�ֽ� 15~16λ��Ч����
	//Ĭ����������һ��С���� ����ʾ��λ����Ч����

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