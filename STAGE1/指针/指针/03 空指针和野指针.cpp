#include <iostream>
using namespace std;

int main()
{
	//int * p = NULL;
	int* p = (int*)0x1100;

	cout << *p << endl;
	
	system("pause");
	return 0;
}