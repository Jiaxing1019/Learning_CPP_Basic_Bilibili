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
	student arr[3] =
	{
		{"Jim", 18, 100},
		{"Kate", 28, 90},
		{"Tony", 60, 59}
	};

	student* p = arr;
	p = p + 2;
	p->score = 60;
	p = p - 2;

	cout << "Name\tAge\tScore" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << p->name << "\t" << p->age << "\t" << p->score << endl;
		p++;
	}

	system("pause");
	return 0;
}