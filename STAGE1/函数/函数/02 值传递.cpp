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
	cout << "b = " << b << endl; // �����������βε�ֵ�ı䣬 ����Ӱ�쵽ʵ��

	system("pause");
	return 0;
}