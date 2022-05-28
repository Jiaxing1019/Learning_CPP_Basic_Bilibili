#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	int age;
	student stu;
};

int main()
{
	teacher tch;
	tch.id = 900040;
	tch.age = 28;
	tch.stu.name = "Jim";
	tch.stu.age = 18;
	tch.stu.score = 100;

	cout << "ID\tAge\tStudent Name\tAge\tScore" << endl;
	cout << tch.id << "\t" << tch.age << "\t" << tch.stu.name << "\t\t" << tch.stu.age << "\t" << tch.stu.score << endl;

	system("pause");
	return 0;
}