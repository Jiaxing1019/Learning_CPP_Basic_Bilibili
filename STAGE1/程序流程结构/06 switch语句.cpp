#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Type in the score of the movie : " << endl;
	cin >> score;

	switch(score)
	{
	case 10:
		cout << "Perfect" << endl;
		break;
	case 9:
		cout << "very good" << endl;
		break;
	case 8:
		cout << "good" << endl;
		break;
	case 7:
		cout << "acceptable" << endl;
		break;
	default:
		cout << "bad" << endl;
		break;
	}

	system("pause");
	return 0;
}