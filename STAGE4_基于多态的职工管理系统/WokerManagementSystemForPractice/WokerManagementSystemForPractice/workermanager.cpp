#include "workermanager.h"

WorkerManager::WorkerManager()
{
	
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "THERE IS NO FILE! " << endl;
		this->Emp_Num = 0;
		this->Emp_Arr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "FILE IS EMPTY! " << endl;
		this->Emp_Num = 0;
		this->Emp_Arr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->get_Num();
	this->Emp_Num = num;
	this->Emp_Arr = new Worker * [num];
	this->Init_Emp();
	this->m_FileIsEmpty = false;
	////testing code:
	//cout << "NUMBER OF EMPLOYEE IN INIT FILE: " << num << endl;
	//for (int i = 0; i < Emp_Num; i++)
	//{
	//	this->Emp_Arr[i]->showInfo();
	//}

}

void WorkerManager::Show_Menu()
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
}

void WorkerManager::Add_Emp()
{
	int addnum = 0;
	cout << "PLEASE TYPE IN THE NUMBER OF THE EMPLOYEES TO ADD: " << endl;
	cin >> addnum;

	if (addnum > 0)
	{
		int newsize = this->Emp_Num + addnum;
		Worker** newspace = new Worker*[newsize];
		for (int i = 0; i < Emp_Num; i++)
		{
			newspace[i] = this->Emp_Arr[i];
		}
		
		int id;
		string name;
		int type;

		for (int i = Emp_Num; i < newsize; i++)
		{
			cout << "PLEASE TYPE IN THE ID OF THE NEW EMPLOYEE: " << endl;
			cin >> id;
			cout << "PLEASE TYPE IN THE NAME OF THE NEW EMPLOYEE: " << endl;
			cin >> name;
			cout << "PLEASE TYPE IN THE TYPE OF THE NEW EMPLOYEE: " << endl;
			cout << "1.EMPLOYEE " << endl;
			cout << "2.MANAGER " << endl;
			cout << "3.BOSS " << endl;

			cin >> type;
			if (type == 1)
			{
				newspace[i] = new Employee(id, name, type);
			}
			if (type == 2)
			{
				newspace[i] = new Manager(id, name, type);
			}
			if (type == 3)
			{
				newspace[i] = new Boss(id, name, type);
			}
		}
		delete[] this->Emp_Arr;
		Emp_Arr = newspace;
		this->Emp_Num = newsize;
		this->m_FileIsEmpty = false;
		cout << "ADD EMPLOYEES COMPLETE! " << endl;
		this->save();
	}
	else
	{
		cout << "ADD FAILED DUE TO WRONG NUMBER! " << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->Emp_Num; i++)
	{
		ofs << this->Emp_Arr[i]->m_ID << " "
			<< this->Emp_Arr[i]->m_Name << " "
			<< this->Emp_Arr[i]->m_Type << endl;
	}
	ofs.close();
}

int WorkerManager::get_Num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int type;
	
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> type)
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
	int type;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> type)
	{
		Worker* worker = NULL;
		if (type == 1)
		{
			worker = new Employee(id, name, type);
		}
		else if (type == 2)
		{
			worker = new Manager(id, name, type);
		}
		else if (type == 3)
		{
			worker = new Boss(id, name, type);
		}
		this->Emp_Arr[index] = worker;
		//delete worker;
		worker = NULL;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		for (int i = 0; i < this->Emp_Num; i++)
		{
			this->Emp_Arr[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::Find_Emp_Id(int id)
{
	for (int i = 0; i < this->Emp_Num; i++)
	{
		if (this->Emp_Arr[i]->m_ID == id)
		{
			return i;
		}
	}
	return -1;
}

void WorkerManager::Delete_Emp()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		int id;
		cout << "PLEASE TYPE IN THE EMPLOYEE TO DELETE: " << endl;
		cin >> id;
		int ret = this->Find_Emp_Id(id);

		if (ret == -1)
		{
			cout << "EMPLOYEE NOT FOUND!" << endl;
		}
		else
		{
			for (int i = ret; i < this->Emp_Num; i++)
			{
				this->Emp_Arr[i] = this->Emp_Arr[i + 1];
			}
			this->Emp_Num--;
			this->save();
			cout << "DELETE COMPLETED!" << endl;
			if (this->Emp_Num == 0)
			{
				this->m_FileIsEmpty = true;
			}
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Modify_Emp()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		cout << "PLEASE TYPE IN THE ID OF THE EMPLOYEE TO DELETE: " << endl;
		int id = -1;
		cin >> id;
		int ret = Find_Emp_Id(id);

		if (ret == -1)
		{
			cout << "EMPLOYEE NOT FOUND!" << endl;
		}
		else
		{
			int newid;
			string newname;
			int newtype;

			cout << "PLEASE TYPE IN THE NEW ID OF THE EMPLOYEE: " << endl;
			cin >> newid;
			cout << "PLEASE TYPE IN THE NEW NAME OF THE EMPLOYEE: " << endl;
			cin >> newname;
			cout << "PLEASE TYPE IN THE NEW TYPE OF THE EMPLOYEE: " << endl;
			cin >> newtype;

			Worker* worker = NULL;
			if (newtype == 1)
			{
				worker = new Employee(newid, newname, newtype);
			}
			else if (newtype == 2)
			{
				worker = new Manager(newid, newname, newtype);
			}
			else if (newtype == 3)
			{
				worker = new Boss(newid, newname, newtype);
			}
			else
			{
				cout << "TYPE IN WRONG! " << endl;
				system("pause");
				system("cls");
				return;
			}
			this->Emp_Arr[ret] = worker;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Search_Emp()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		int select = 0;
		cout << "PLEASE TYPE IN THE WAY TO SEARCH" << endl;
		cout << "1. BY ID " << endl;
		cout << "2. BY NAME " << endl;
		cin >> select;

		if (select == 1)
		{
			int id;
			cout << "PLEASE TYPE IN THE ID TO SEARCH: " << endl;
			cin >> id;
			int ret = this->Find_Emp_Id(id);
			if (ret == -1)
			{
				cout << "NO SUCH ID FOUND! " << endl;
			}
			else
			{
				this->Emp_Arr[ret]->showInfo();
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "PLEASE TYPE IN THE NAME TO SEARCH: " << endl;
			cin >> name;
			int index=0;
			for (int i = 0; i < this->Emp_Num; i++)
			{
				if (this->Emp_Arr[i]->m_Name == name)
				{
					this->Emp_Arr[i]->showInfo();
					index++;
				}
			}
			if (index == 0)
			{
				cout << "NO SUCH ID FOUND! " << endl;
			}
		}
		else
		{
			cout << "TYPE IN WRONG! " << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Order_Emp()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		int select = 0;
		cout << "PLEASE TYPE IN THE WAY TO ORDER: " << endl;
		cout << "1. ASCENDING ORDER." << endl;
		cout << "2. DESCENDING ORDER." << endl;
		cin >> select;
		for (int i = 0; i < this->Emp_Num - 1; i++)
		{
			Worker* temp = NULL;
			int minORmax = i;
			for (int j = i+1; j < this->Emp_Num; j++)
			{
				if (this->Emp_Arr[minORmax]->m_ID > this->Emp_Arr[j]->m_ID && select == 1)
				{
					minORmax = j;
				}
				if (this->Emp_Arr[minORmax]->m_ID < this->Emp_Arr[j]->m_ID && select == 2)
				{
					minORmax = j;
				}
			}
			temp = this->Emp_Arr[i];
			this->Emp_Arr[i] = Emp_Arr[minORmax];
			Emp_Arr[minORmax] = temp;
			cout << "ORDER SUCCEED!" << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Delete_File()
{
	if (m_FileIsEmpty)
	{
		cout << "FILE NOT EXIST OR EMPTY! " << endl;
	}
	else
	{
		int select = 0;
		cout << "SURE TO DELETE?" << endl;
		cout << "1. YES." << endl;
		cout << "2. NO." << endl;
		cin >> select;
		if (select == 1)
		{
			ifstream ifs;
			ifs.open(FILENAME, ios::trunc);
			delete[] this->Emp_Arr;
			this->Emp_Arr = NULL;
			this->Emp_Num = 0;
			this->m_FileIsEmpty = true;
			cout << "DELETE SUCCEED! " << endl;
		}
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->Emp_Arr != NULL)
	{
		delete[] this->Emp_Arr;
	}
}