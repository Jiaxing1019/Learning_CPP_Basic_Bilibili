#include <iostream>
#include <string>
using namespace std;

class Building
{
	friend void test01(Building* Building);

public:
	string m_SittingRoom = "SittingRoom";
private:
	string m_BedRoom = "BedRoom";
};

void test01(Building* Building)
{
	cout << "Visiting Public£º " << Building -> m_SittingRoom << endl;
	cout << "Visiting Private£º " << Building-> m_BedRoom << endl;
}

int main()
{
	Building Building;
	test01(&Building);

	system("pause");

	return 0;
}