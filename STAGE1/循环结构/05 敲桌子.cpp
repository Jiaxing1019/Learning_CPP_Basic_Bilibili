#include <iostream>
using namespace std;

int main()
{

	for (int i = 0; i < 101; i++)
	{
		if (i % 7 != 0 && i % 10 % 7 != 0 && i / 10 != 7)
		{
			cout << i << endl;
		}

	}

	return 0;
	system("pause");
}