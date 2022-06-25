#include <iostream>
using namespace std;
#include "workermanager.h"


//void test01()
//{
//	Worker* worker = NULL;
//	worker = new Employee(1, "Jim", 1);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Manager(2, "Tony", 2);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Boss(3, "Tom", 3);
//	worker->showInfo();
//	delete worker;
//}

int main()
{
	//test01();

	WorkerManager wm;

	int select;
	while (true)
	{
		wm.Show_Menu();
		cout << "PLEASE TYPE IN YOUR CHOICE: " << endl;
		cin >> select;
		
		switch (select)
		{
		case 0:
			cout << "WELCOME TO USE AGAIN, BYE. "<<endl;
			system("pause");
			return 0;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Delete_Emp();
			break;
		case 4:
			wm.Modify_Emp();
			break;
		case 5:
			wm.Search_Emp();
			break;
		case 6:
			wm.Order_Emp();
			break;
		case 7:
			wm.Delete_File();
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;

}