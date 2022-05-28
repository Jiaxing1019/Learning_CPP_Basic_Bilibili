#include <iostream>
using namespace std;

void bubbleSort(int* arr, int len)//当数组名传入到函数作为参数时，被退化为指向首元素的指针
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArr1(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void printArr2(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *arr << endl;
		arr++;
	}
}

void printArr3(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void printArr4(int arr[], int len) 
{
	for (int i = 0; i < len; i++)
	{
		cout << *arr << endl;
		arr++;
	}
}

int main()
{
	int arr[] = { 2,4,6,8,1,3,5,7 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);//当数组名传入到函数作为参数时，被退化为指向首元素的指针
	printArr3(arr, len);

	cout << arr[0] << endl;
	system("pause");

	return 0;
}