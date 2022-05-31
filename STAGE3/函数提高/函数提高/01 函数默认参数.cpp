#include <iostream>
using namespace std;


int func(int a = 10, int b = 20)
{
	return a + b;
}

int func(int a = 30, int b = 30, int c = 30);

int func(int a, int b, int c)
{
	return a + b + c;
}



int main()
{

	cout << "ret=" << func(1, 1, 1) << endl;

	//func();


	system("pause");

	return 0;
}