#include <iostream>
using namespace std;

int main()
{

	int arr[10] = { 2,4,6,8,10,1,3,5,7,9 };

	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	int* p = arr;
	for (int i=0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");

	return 0;
}