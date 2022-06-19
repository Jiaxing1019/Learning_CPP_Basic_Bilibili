#include <iostream>
#include <string>
using namespace std;
#include <fstream>

void test01()
{
	ofstream ofs;

	ofs.open("test.txt", ios::out);

	ofs << "Name: Jim" << endl;
	ofs << "Gender: Male" << endl;
	ofs << "Age: 18" << endl;

	ofs.close();
}





int main()
{

	test01();



	system("pause");

	return 0;
}