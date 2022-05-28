#include <iostream>
#include <string>
using namespace std;

struct hero
{
	string name;
	int age;
	char gen;
};

void bubbleSort(struct hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
void printHeros(struct hero arr[], int len)
{
	cout << "Name\tAge\tGender" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << "\t" << arr[i].age << "\t" << arr[i].gen << endl;
	}
}

int main()
{
	struct hero arr[5]
	{
		{"Áõ±¸",23,'M'},
		{"¹ØÓð",22,'M'},
		{"ÕÅ·É",20,'M'},
		{"ÕÔÔÆ",21,'M'},
		{"õõ²õ",19,'F'},
	};

	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	printHeros(arr, len);

	system("pause");
	return 0;
}