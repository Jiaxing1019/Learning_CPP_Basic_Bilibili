#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{
public:
	GoodGay();
	void visit01();
	void visit02();
	Building* building;
};
class Building
{
	friend void GoodGay::visit02();
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit01()
{
	cout << "goodgay visiting public: " << building->m_SittingRoom << endl;
}
void GoodGay::visit02()
{
	cout << "goodgay visiting private: " << building->m_BedRoom << endl;
}

Building::Building()
{
	m_SittingRoom = "SittingRoom";
	m_BedRoom = "BedRoom";
}

void test01()
{
	GoodGay goodgay;
	goodgay.visit01();
	goodgay.visit02();
}

int main()
{
	test01();

	system("pause");

	return 0;
}