#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	
	void setID(int id)
	{
		stuID = id;
	}

	void setName(string name)
	{
		stuName = name;
	}

	void showStu()
	{
		cout << "ID: " << stuID << " Name: " << stuName << endl;
	}
public:

	int stuID;
	string stuName;

};

int main()
{

	class Student stu1;

	stu1.setID(1);
	stu1.setName("Jim");
	stu1.showStu();

	class Student stu2;

	stu2.setID(2);
	stu2.setName("Kate");
	stu2.showStu();

	system("pause");

	return 0;
}