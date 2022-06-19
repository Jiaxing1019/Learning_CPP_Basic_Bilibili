#include <iostream>
#include <string>
using namespace std;

class AbstractDrink
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourOut() = 0;
	virtual void PutIn() = 0;

	void MakeDrink()
	{
		Boil();
		Brew();
		PourOut();
		PutIn();
	}
};

class Coffee :public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "BOIL Water" << endl;
	}
	virtual void Brew()
	{
		cout << "BREW COFFEE" << endl;
	}
	virtual void PourOut()
	{
		cout << "POUR OUT in cup" << endl;
	}
	virtual void PutIn()
	{
		cout << "PUT IN Milk and Sugar" << endl;
	}
};
class Tea :public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "BOIL Water" << endl;
	}
	virtual void Brew()
	{
		cout << "BREW TEA" << endl;
	}
	virtual void PourOut()
	{
		cout << "POUR OUT in cup" << endl;
	}
	virtual void PutIn()
	{
		cout << "PUT IN Lemon" << endl;
	}
};

void DoWork(AbstractDrink* drink)
{
	drink->MakeDrink();
}

void test01()
{
	DoWork(new Coffee);
	cout << "================="<<endl;
	DoWork(new Tea);
}

int main()
{
	test01();


	system("pause");

	return 0;
}