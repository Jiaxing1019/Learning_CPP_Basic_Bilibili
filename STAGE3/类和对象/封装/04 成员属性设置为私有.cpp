#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//Write & Read Name
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}

	//Read Only Name
	int getAge()
	{
		return m_Age;
	}

	//Write Only Car
	void setCar(string car)
	{
		m_Car = car;
	}

private:
	string m_Name;
	int m_Age = 18;
	string m_Car;
};




int main()
{
	class Person P1;
	P1.setName("Jim");
	cout << P1.getName() << endl;

	cout << P1.getAge() << endl;

	P1.setCar("Audi");

	//P1.m_Name;
	//P1.m_Age;
	//P1.m_Car;

	system("pause");

	return 0;
}