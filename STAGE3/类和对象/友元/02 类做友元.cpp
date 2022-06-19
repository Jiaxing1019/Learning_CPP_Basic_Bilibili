#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
private:
	Building* building;
};

class Building
{
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

GoodGay::GoodGay()
{
	building = new Building;
}
Building::Building()
{
	m_SittingRoom = "SittingRoom";
	m_BedRoom = "BedRoom";
}
void GoodGay::visit()
{
	cout << "visiting public: " << building->m_SittingRoom << endl;
	cout << "visiting private: " << building->m_BedRoom << endl;

}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();




	system("pause");

	return 0;
}