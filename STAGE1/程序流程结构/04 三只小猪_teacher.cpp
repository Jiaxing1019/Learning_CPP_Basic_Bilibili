#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;

	cin >> num1;
	cin >> num2;
	cin >> num3;

	if(num1>num2)
	{ 
		if (num1 > num3)
		{
			cout << "A" << endl;
		}
		else
		{ 
			cout << "C" << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "B" << endl;
		}
		else
		{ 
			cout << "C" << endl;
		}
	}

	system("pause");
	return 0;
}