#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	WorkerManager();
	
	void ShowMenu();

	void ExitSystem();

	void Add_Emp();

	void Save();

	int Get_EmpNum();

	void Init_Emp();

	void Show_Emp();

	int IsExist(int id);

	void Del_Emp();

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	~WorkerManager();

	int m_EmpNum;

	Worker** m_EmpArray;

	bool m_FileIsEmpty;
};