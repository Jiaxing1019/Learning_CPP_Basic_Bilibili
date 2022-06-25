#pragma once
#include <iostream>
using namespace std;
#include <fstream>
#define FILENAME "empFILE.txt"
#include <string>

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager
{
public:
	
	WorkerManager();

	void Show_Menu();

	void Add_Emp();

	void save();

	int get_Num();

	void Init_Emp();

	void Show_Emp();

	int Find_Emp_Id(int id);
	
	void Delete_Emp();

	void Modify_Emp();

	void Search_Emp();

	void Order_Emp();

	void Delete_File();

	~WorkerManager();

	int Emp_Num;
	Worker** Emp_Arr = NULL;
	bool m_FileIsEmpty = false;
};