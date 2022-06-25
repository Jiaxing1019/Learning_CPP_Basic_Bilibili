#include "workerManager.h"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		//cout << "NO FILE EXIST" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "FILE IS EMPTY" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->Get_EmpNum();
	//cout << "NUMBER OF EMPLOYEES IS:" << num << endl;
	this->m_EmpNum = num;
	
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->Init_Emp();

	//for (int i = 0; i < m_EmpNum; i++)
	//{
	//	cout << this->m_EmpArray[i]->m_ID << " "
	//		<< this->m_EmpArray[i]->m_Name << " "
	//		<< this->m_EmpArray[i]->m_DeptID << endl;
	//}
	
}

void WorkerManager::ShowMenu()
{
	cout << "*********************************************" << endl;
	cout << "*** WELCOME TO USE WORKER MANAGER SYSTEM ! **" << endl;
	cout << "*************  0.EXIT   SYSTEM  *************" << endl;
	cout << "*************  1.ADD    WORKER  *************" << endl;
	cout << "*************  2.SHOW   WORKER  *************" << endl;
	cout << "*************  3.DELETE WORKER  *************" << endl;
	cout << "*************  4.MODIFY WORKER  *************" << endl;
	cout << "*************  5.SEARCH WORKER  *************" << endl;
	cout << "*************  6.ORDER  WORKER  *************" << endl;
	cout << "*************  7.DELETE WORKER  *************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "WELCOME TO USE AGAIN, BYE." << endl;
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "PLEASE TYPE IN NUMBER OF EMPLOYEES TO ADD: ";
	int addNum = 0;
	cin >> addNum;

	if (addNum != 0)
	{
		int newsize = this->m_EmpNum + addNum;

		Worker** newspace = new Worker * [newsize];

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int deptid;

			cout << "PLEASE TYPE THE ID OF WORKER " << i + 1 << endl;
			cin >> id;
			cout << "PLEASE TYPE THE NAME OF WORKER " << i + 1 << endl;
			cin >> name;
			cout << "PLEASE CHOICE THE TYPE OF EMPLOYEE " << i + 1 << endl;
			cout << "1: EMPLOYEE" << endl;
			cout << "2: MANAGER" << endl;
			cout << "3: BOSS" << endl;
			cin >> deptid;

			Worker* worker = NULL;
			switch (deptid)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			newspace[this->m_EmpNum + i] = worker;
		}
		delete[]this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->m_EmpNum = newsize;
		m_FileIsEmpty = false;
		cout << addNum << " EMPLOYEE ADDED !" << endl;
	}
	else
	{
		cout << "ERROR TYPE IN!" << endl;
	}
	this->Save();
	system("pause");
	system("cls");
}

void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptID << endl;
	}
	ofs.close();
}

int WorkerManager::Get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int deptid;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> deptid)
	{
		num++;
	}
	ifs.close();
	return num;
}

void WorkerManager::Init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int deptid;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> deptid)
	{
		Worker* worker;
		if (deptid == 1)
		{
			worker = new Employee(id, name, deptid);
		}
		else if (deptid == 2)
		{
			worker = new Manager(id, name, deptid);
		}
		else
		{
			worker = new Boss(id, name, deptid);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this -> m_EmpNum; i++)
	{
		if (id == this->m_EmpArray[i]->m_ID)
		{
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp()
{
	if (!this->m_FileIsEmpty)
	{
		int id = 0;
		cout << "PLEASE TYPE IN THE ID OF EMPLOYEE TO DELETE:" << endl;
		cin >> id;
		int index = IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->Save();
			cout << "DELETE SUCCEED!" << endl;
			if (this->m_EmpNum == 0)
			{
				this->m_FileIsEmpty = true;
			}
		}
		else
		{
			cout << "DELETE FAILED, NO EMPLOYEE WITH TYPED IN ID FOUND!" << endl;
		}
	}
	else
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
	}
	else
	{
		int id = 0;
		cout << "PLEASE TYPE IN THE ID OF EMPLOYEE TO MODIFY: " << endl;
		cin >> id;
		if (this->IsExist(id) != -1)
		{
			int newid;
			string newname;
			int newdeptid;

			cout << "PLEASE TYPE IN THE NEW ID: " << endl;
			cin >> newid;
			cout << "PLEASE TYPE IN THE NEW NAME: " << endl;
			cin >> newname;
			cout << "PLEASE TYPE IN THE NEW TYPE OF THE EMPLOYEE: " << endl;
			cout << "1: EMPLOYEE" << endl;
			cout << "2: MANAGER" << endl;
			cout << "3: BOSS" << endl;
			cin >> newdeptid;

			Worker* worker = NULL;
			switch (newdeptid)
			{
			case 1:
				worker = new Employee(newid, newname, newdeptid);
				break;
			case 2:
				worker = new Manager(newid, newname, newdeptid);
				break;
			case 3:
				worker = new Boss(newid, newname, newdeptid);
				break;
			default:
				break;
			}

			int ret = this->IsExist(id);
			this->m_EmpArray[ret] = worker;

			this->Save();
			cout << "ÐÞ¸Ä³É¹¦! " << endl;
		}
		else
		{
			cout << "NO SUCH EMPLOYEE FOUND! " << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
	}
	else
	{
		int select = 0;
		cout << "PLEASE TYPE IN THE WAY TO SEARCH: " << endl;
		cout << "1: SEARCH BY ID." << endl;
		cout << "2. SEARCH BY Name. " << endl;
		cin >> select;

		if (select == 1)
		{
			int id = 0;
			cout << "PLEASE TYPE IN THE ID OF THE EMPLOYEE TO SEARCH: " << endl;
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1)
			{
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "NO SUCH EMPLOYEE FOUND! " << endl;
			}
		}
		else if (select == 2)
		{
			string name = " ";
			cout << "PLEASE TYPE IN THE NAME OF THE EMPLOYEE TO SEARCH: " << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "NO SUCH EMPLOYEE FOUND! " << endl;
			}
		}
		else
		{
			cout << "TYPED IN WRONG NUMBER! " << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		int select = 0;
		cout << "PLEASE TYPE IN THE WAY TO SORT: " << endl;
		cout << "1. ASENDING SORT. " << endl;
		cout << "2. DESENDING SORT. " << endl;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrmax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1 && this->m_EmpArray[minOrmax]->m_ID > this->m_EmpArray[j]->m_ID)
				{
					minOrmax = j;
				}
				else if (select == 2 && this->m_EmpArray[minOrmax]->m_ID < this->m_EmpArray[j]->m_ID)
				{
					minOrmax = j;
				}
			}
			if (i != minOrmax)
			{
				Worker* temp = this->m_EmpArray[minOrmax];
				this->m_EmpArray[minOrmax] = this->m_EmpArray[i];
				this->m_EmpArray[i] = temp;
			}
		}
		cout << "REORDER DONE!" << endl;
		this->Save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean_File()
{
	if (this->m_FileIsEmpty)
	{
		cout << "FILE IS EMPTY OR NOT EXIST!" << endl;
	}
	else
	{
		int select = 0;
		cout << "SURE TO CLEAN FILE? " << endl;
		cout << "1. YES " << endl;
		cout << "2. NO " << endl;
		cin >> select;
		if (select == 1)
		{
			ofstream ofs;
			ofs.open(FILENAME, ios::trunc);
			ofs.close();
			if (this->m_EmpArray!= NULL)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					if (this->m_EmpArray[i] != NULL)
					{
						delete m_EmpArray[i];
					}
				}
				delete[] this->m_EmpArray;
				this->m_EmpArray = NULL;
				this->m_FileIsEmpty = true;
			}
			cout << "FILE CLEANED! " << endl;
		}
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
