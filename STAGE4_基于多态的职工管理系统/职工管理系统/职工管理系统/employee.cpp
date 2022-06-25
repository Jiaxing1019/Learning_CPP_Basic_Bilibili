#include "employee.h"


Employee::Employee(int id, string name, int deptid)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = deptid;
}

void Employee::showInfo()
{
	cout << "ID:" << m_ID 
		<< "\tNAME:" << m_Name 
		<< "\tDeptID:" << this->getDeptName()
		<< "\tReportTo:Manager" << endl;
}
string Employee::getDeptName()
{
	return ("Employee");
}
