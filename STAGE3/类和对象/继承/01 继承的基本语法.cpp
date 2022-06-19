#include <iostream>
#include <string>
using namespace std;

class BasePage
{
public:
	void header()
	{
		cout << "HEADER" << endl;
	}
	void footer()
	{
		cout << "FOOTER" << endl;
	}
};
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++" << endl;
	}
};
class JAVA :public BasePage
{
public:
	void content()
	{
		cout << "JAVA" << endl;
	}
};
class PYTHON : public BasePage
{
public:
	void content()
	{
		cout << "PYTHON" << endl;
	}
};

void test01()
{
	CPP cpp;
	cpp.header();
	cpp.content();
	cpp.header();
	cout << "===========================" << endl;
	JAVA ja;
	ja.header();
	ja.content();
	ja.footer();
	cout << "===========================" << endl;
	PYTHON py;
	py.header();
	py.content();
	py.footer();

}

int main()
{
	test01();

	system("pause");

	return 0;
}