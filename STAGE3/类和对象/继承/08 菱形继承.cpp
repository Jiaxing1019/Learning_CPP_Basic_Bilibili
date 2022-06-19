#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	int m_Age;
};

class Sheep :virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age << endl;
	cout<< sizeof(Sheep) << endl;
}


int main()
{
	test01();


	system("pause");

	return 0;
}