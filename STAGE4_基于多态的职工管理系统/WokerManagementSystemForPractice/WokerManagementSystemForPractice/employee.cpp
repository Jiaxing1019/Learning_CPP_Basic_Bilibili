#include "employee.h"

Employee::Employee(int id, string name, int type)
{
	m_ID = id;
	m_Name = name;
	m_Type = type;
}

void Employee::showInfo()
{
	cout << "ID: " << m_ID
		<< "\tNAME: " << m_Name
		<< "\tTYPE: " << this->getType() << endl;
}

string Employee::getType()
{
	return string("EMPLOYEE");
}