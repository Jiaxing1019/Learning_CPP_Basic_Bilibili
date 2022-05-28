#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	student stu1 = { "Jim",18,99 };

	student* p = &stu1;
	p->score = 99;
	cout << p->name << "\t" << p->age << "\t" << p->score << endl;
	system("pause");
	return 0;
}