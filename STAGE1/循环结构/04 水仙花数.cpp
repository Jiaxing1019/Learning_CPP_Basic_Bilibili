#include <iostream>
using namespace std;

int main()
{
	int num = 100;
	int num_hd = 0;
	int num_td = 0;
	int num_ud = 0;
	int sum_sq = 0;

	while (num < 1000)
	{
		num_hd = num / 100;
		num_td = (num % 100) / 10;
		num_ud = num % 10;
		sum_sq = num_hd * num_hd * num_hd + num_td * num_td * num_td + num_ud * num_ud * num_ud;

		//cout << num << endl;
		//cout << num_hd << endl;
		//cout << num_td << endl;
		//cout << num_ud << endl;
		//cout << sum_sq << endl;

		if (sum_sq == num)
		{
			cout << num << endl;
		}

		num++;
	}

	return 0;
	system("pause");
}