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

	arr[2].score = 60;

	cout << "Name\tAge\tScore" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << "\t" << arr[i].age << "\t" << arr[i].score << endl;
	}

	system("pause");
	return 0;
}