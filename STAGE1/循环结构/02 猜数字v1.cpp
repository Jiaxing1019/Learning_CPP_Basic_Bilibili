#include <iostream>
using namespace std;

int main()
{
	int num = rand() % 100 + 1;
	cout << num << endl;
	int num1 = 0;
	while (num != num1)
	{
		cin >> num1;
		if (num == num1)
		{
			break;
		}
		else if (num < num1)
		{
			cout << "too high" << endl;
		}
		else
		{
			cout << "too low" << endl;
		}
	}
	cout << "correct" << endl;
	system("pause");
	return 0;
}