#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string m_Name;

protected:
	string m_Car;

private:
	string m_Password;

public:
	void func()
	{
		m_Name = "Jin";
		m_Car = "Audi";
		m_Password = "123123";
	}

	void showPerson()
	{
		cout << m_Name << m_Car << m_Password << endl;
	}
};




int main()
{

	Person P;
	P.func();
	P.m_Name = "James";
	//P.m_Car;
	//P.m_Password;
	P.showPerson();
	system("pause");

	return 0;
}