#include <iostream>
using namespace std;
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//void test01()
//{
//	Worker* worker = NULL;
//	worker = new Employee(1,"Jim",1);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Manager(2, "Tom", 2);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Boss(3, "Kate", 3);
//	worker->showInfo();
//	delete worker;
//
//}

int main()
{
	//test01();

	WorkerManager wm;
	int choice = 0;

	while (true)
	{
		wm.ShowMenu();

		cout << "PLEASE TYPE IN YOUR CHOICE" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.ExitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}