#include "manager.h"

Manager::Manager(int id, string name, int deptid)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = deptid;
}

void Manager::showInfo()
{
	cout << "ID:" << m_ID
		<< "\tNAME:" << m_Name
		<< "\tDeptID:" << this->getDeptName()
		<< "\tReportTo:Boss" << endl;
}
string Manager::getDeptName()
{
	return ("Manager");
}