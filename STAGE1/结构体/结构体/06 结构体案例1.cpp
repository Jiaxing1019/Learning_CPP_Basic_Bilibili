#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
	string sName;
	int score;
};

struct teacher
{
	string tName;
	student s_arr[5];
};

void allocateTeacher(teacher t_arr[], int tlen)
{
	string tNameSeed = "ABC";
	string sNameSeed = "abcde";
	int slen = sizeof(t_arr[0]) / sizeof(t_arr[0].s_arr[0]);
	for (int i = 0; i < tlen; i++)
	{
		t_arr[i].tName = "Teacher_";
		t_arr[i].tName += tNameSeed[i];
		for (int j = 0; j < slen; j++)
		{
			t_arr[i].s_arr[j].sName = "Student_";
			t_arr[i].s_arr[j].sName += sNameSeed[j];
			t_arr[i].s_arr[j].score = rand()%61+40;
		}
	}
}

void printTeachers(teacher t_arr[], int tlen)
{
	int slen = sizeof(t_arr[0]) / sizeof(t_arr[0].s_arr[0]);
	for (int i = 0; i < tlen; i++)
	{
		cout << t_arr[i].tName << endl;
		for (int j = 0; j < slen; j++)
		{
			cout << "\t" << t_arr[i].s_arr[j].sName << "\t" << t_arr[i].s_arr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	
	struct teacher t_arr[3];
	int tlen = sizeof(t_arr) / sizeof(t_arr[0]);

	allocateTeacher(t_arr, tlen);
	printTeachers(t_arr, tlen);

	system("pause");
	return 0;
}