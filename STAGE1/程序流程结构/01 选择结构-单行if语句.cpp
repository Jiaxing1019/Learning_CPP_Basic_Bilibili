#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Type in your score: " << endl;
	cin >> score;

	if (score >= 600)
	{
		cout << "I made it! " << endl;
	}

	system("pause");
	return 0;
}