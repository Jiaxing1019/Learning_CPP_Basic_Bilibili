#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
	void setX(int X);
	int getX();
	void setY(int Y);
	int getY();
private:
	int m_X;
	int m_Y;
};