#include "boss.h"

Boss::Boss(int id, string name, int type)
{
	m_ID = id;
	m_Name = name;
	m_Type = type;
}

void Boss::showInfo()
{
	cout << "ID: " << m_ID
		<< "\tNAME: " << m_Name
		<< "\tTYPE: " << this->getType() << endl;
}

string Boss::getType()
{
	return string("BOSS");
}