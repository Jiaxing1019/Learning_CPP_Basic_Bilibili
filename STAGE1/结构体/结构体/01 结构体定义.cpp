#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
}stu3;

int main()
{
	struct student stu1;

	stu1.name = "Jim";
	stu1.age = 18;
	stu1.score = 100;

	struct student stu2 = { "Kate",28,80 };

	stu3.name = "Tony";
	stu3.age = 60;
	stu3.score = 60;

	cout << "Name\tAge\tScore" << endl;
	cout << stu1.name << "\t" << stu1.age << "\t" << stu1.score << endl;
	cout << stu2.name << "\t" << stu2.age << "\t" << stu2.score << endl;
	cout << stu3.name << "\t" << stu3.age << "\t" << stu3.score << endl;

	system("pause");
	return 0;
}