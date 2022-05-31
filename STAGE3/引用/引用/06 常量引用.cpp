#include <iostream>
using namespace std;


void showValue(const int& ref)
{
	//ref += 10;
	cout << ref << endl;
}



int main()
{
	// int& ref = 10;
	const int& ref = 10; // int temp=10; const int& ref = temp;

	// ref =100;

	int a = 10;
	showValue(a);


	system("pause");

	return 0;
}
