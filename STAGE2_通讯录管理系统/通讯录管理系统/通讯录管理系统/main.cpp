#include <iostream>
#include <string>

using namespace std;

#define MAX 1000

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct AddressBooks
{
	struct Person personArray[MAX];
	int m_size;
};

void showMenu()
{
	cout << "******************************" << endl;
	cout << "*****  1、Add    Person  *****" << endl;
	cout << "*****  2、Show   ALL     *****" << endl;
	cout << "*****  3、Delete Person  *****" << endl;
	cout << "*****  4、Search Person  *****" << endl;
	cout << "*****  5、Modify Person  *****" << endl;
	cout << "*****  6、Delete ALL     *****" << endl;
	cout << "*****  0、QUIT           *****" << endl;
	cout << "******************************" << endl;
}

void addPerson(AddressBooks*abs)
{
	if (abs->m_size == MAX)
	{
		cout << "Address Book is completed, unable to add" << endl;
		return;
	}
	else
	{
		cout << "Please type in Name：" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;

		cout << "Please type in Gender" << endl;
		cout << "1 -- Male" << endl;
		cout << "2 -- Female" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
				cout << "Wrong Input, Please Type Again";
		}

		cout << "Please type in Age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;

		cout << "Please type in Phone Number" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;

		cout << "Please type in Address" << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_size].m_Addr = addr;

		abs->m_size++;
		cout << "Add Completed" << endl;
		system("pause");
		system("cls");
	}
}

void showPerson(AddressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "Address Book is Empty" << endl;
	}
	else
	{
		cout << "Name\tGender\tAge\tPhone\tAddress" << endl;
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << abs->personArray[i].m_Name << "\t";
			cout << (abs->personArray[i].m_Sex == 1 ? "Male" : "Female") << "\t";
			cout << abs->personArray[i].m_Age << "\t";
			cout << abs->personArray[i].m_Phone << "\t";
			cout << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(AddressBooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(AddressBooks* abs)
{
	cout << "Type in the Name of whom you want to delete" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "Not this person in the Address Book" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << name << " Deleted" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(AddressBooks* abs)
{
	cout << "Type in the Name of whom you want to delete" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "Not this person in the Address Book" << endl;
	}
	else
	{
		cout << "Name\tGender\tAge\tPhone\tAddress" << endl;
		cout << abs->personArray[ret].m_Name << "\t";
		cout << (abs->personArray[ret].m_Sex == 1 ? "Male" : "Female") << "\t";
		cout << abs->personArray[ret].m_Age << "\t";
		cout << abs->personArray[ret].m_Phone << "\t";
		cout << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(AddressBooks* abs)
{
	cout << "Type in the Name of whom you want to delete" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "Not this person in the Address Book" << endl;
	}
	else
	{
		cout << "Please type in Name：" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "Please type in Gender" << endl;
		cout << "1 -- Male" << endl;
		cout << "2 -- Female" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "Wrong Input, Please Type Again";
		}

		cout << "Please type in Age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "Please type in Phone Number" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "Please type in Address" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
	}
	system("pause");
	system("cls");
}

void cleanAddressBooks(AddressBooks* abs)
{
	abs->m_size = 0;
	cout << "Address is empty" << endl;
	system("pause");
	system("cls");
}
int main()
{
	struct AddressBooks abs;
	abs.m_size = 0;
	
	int select = 0;
	
	while (true)
	{
		//system("cls");
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs);
			break;
		case 2: //显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人
			deletePerson(&abs);
			break;
		case 4: //查找联系人
			findPerson(&abs);
			break;
		case 5: //修改联系人
			modifyPerson(&abs);
			break;
		case 6: //删除通讯录
			cleanAddressBooks(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎再次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}