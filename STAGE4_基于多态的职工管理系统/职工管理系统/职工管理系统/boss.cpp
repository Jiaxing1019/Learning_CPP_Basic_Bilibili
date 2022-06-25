#include "boss.h"

Boss::Boss(int id, string name, int deptid)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = deptid;
}

void Boss::showInfo()
{
	cout << "ID:" << m_ID
		<< "\tNAME:" << m_Name
		<< "\tDeptID:" << this->getDeptName()
		<< "\tReportTo:StackHolder" << endl;
}
string Boss::getDeptName()
{
	return ("Boss");
}