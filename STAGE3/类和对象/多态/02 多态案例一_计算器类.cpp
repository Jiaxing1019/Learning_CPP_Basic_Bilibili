#include <iostream>
#include <string>
using namespace std;

//普通实现
class Calculator
{
public:
	int Calculate(string operat)
	{
		if (operat == "+")
		{
			return m_Num1 + m_Num2;
		}
		if (operat == "-")
		{
			return m_Num1 - m_Num2;
		}
		if (operat == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

	int m_Num1;
	int m_Num2;
};

void test01()
{
	Calculator cal;
	cal.m_Num1 = 10;
	cal.m_Num2 = 10;

	cout << "Num1 + Num2 = " << cal.Calculate("+") << endl;
	cout << "Num1 - Num2 = " << cal.Calculate("-") << endl;
	cout << "Num1 * Num2 = " << cal.Calculate("*") << endl;

}

//多态实现

class AbstractCalculator
{
public:
	virtual int Calculate()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

class AddCalculator :public AbstractCalculator
{
public:
	int Calculate()
	{
		return m_Num1 + m_Num2;
	}
};
class SubCalculator :public AbstractCalculator
{
public:
	int Calculate()
	{
		return m_Num1 - m_Num2;
	}
};
class MulCalculator :public AbstractCalculator
{
public:
	int Calculate()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractCalculator *abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << "Num1 + Num2 = " << abc->Calculate() << endl;
	delete abc;

	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << "Num1 - Num2 = " << abc->Calculate() << endl;
	delete abc;

	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << "Num1 * Num2 = " << abc->Calculate() << endl;
	delete abc;

}

void DoCalcul(AbstractCalculator& abc)
{
	cout << abc.Calculate() << endl;
}

void test03()
{
	AddCalculator add;
	add.m_Num1 = 100;
	add.m_Num2 = 100;
	DoCalcul(add);
}

int main()
{

	//test01();
	//test02();
	test03();


	system("pause");

	return 0;
}