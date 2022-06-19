#include <iostream>
#include <string>
using namespace std;
#include "point.h"
#include "circle.h"


//class Point
//{
//public:
//	void setX(int X)
//	{
//		m_X = X;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int Y)
//	{
//		m_Y = Y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle
//{
//public:
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};

void isOnCircle(Circle C, Point P)
{
	int distance =
		(C.getCenter().getX() - P.getX()) * (C.getCenter().getX() - P.getX()) +
		(C.getCenter().getY() - P.getY()) * (C.getCenter().getY() - P.getY());
	int distanceR =
		C.getR() * C.getR();
	if (distance > distanceR)
	{
		cout << "out" << endl;
	}
	else if (distance == distanceR)
	{
		cout << "on" << endl;
	}
	else
	{
		cout << "in" << endl;
	}
}

int main()
{

	Point P;
	P.setX(10);
	P.setY(10);

	Point Center;
	Center.setX(10);
	Center.setY(0);

	Circle C;
	C.setR(10);
	C.setCenter(Center);

	isOnCircle(C, P);

	system("pause");

	return 0;
}