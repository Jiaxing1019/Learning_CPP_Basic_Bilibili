#include <iostream>
#include <string>
using namespace std;
#include <fstream>

void test01()
{

	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		return;
	}

	//Method1
	//char buf[1024];
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//Method2
	//char buf[1024];
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//Method3
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//Method4
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}