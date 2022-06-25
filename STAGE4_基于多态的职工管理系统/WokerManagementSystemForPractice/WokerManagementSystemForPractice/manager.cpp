#include "manager.h"

Manager::Manager(int id, string name, int type)
{
	m_ID = id;
	m_Name = name;
	m_Type = type;
}

void Manager::showInfo()
{
	cout << "ID: " << m_ID
		<< "\tNAME: " << m_Name
		<< "\tTYPE: " << this->getType() << endl;
}

string Manager::getType()
{
	return string("MANAGER");
}