#include <iostream>
#include <string>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0, max = 0;
	string M;

	cout << "Type in the weights of the 3 pigs (kg)" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b)
	{
		max = a;
		M = "A";
	}
	else if (a == b)
	{
		max = a;
		M = "A and B";
	}
	else
	{
		max = b;
		M = "B";
	}

	if (max < c)
	{
		max = c;
		M = "C";
	}
	else if (max == c)
	{
		if (max == a && max != b)
		{
			M = "A and C";
		}
		else if (max == b && max != a)
		{
			M = "B and C";
		}
		else
		{
			M = "A and B and C";
		}
	}
	else
	{
	}

	cout << "The most weight pig: " << M << ": " << max << "kg" << endl;

	system("pause");
	return 0;
}