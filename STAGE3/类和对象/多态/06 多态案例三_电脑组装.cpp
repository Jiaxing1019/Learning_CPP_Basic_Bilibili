#include <iostream>
#include <string>
using namespace std;

class CPU
{
public:
	virtual void Calculate() = 0;
};
class GPU
{
public:
	virtual void Display() = 0;
};
class MEM
{
public:
	virtual void Storage() = 0;
};

//Intel
class IntelCPU : public CPU
{
public:
	void Calculate()
	{
		cout << "INTEL CUP Working" << endl;
	}
};
class IntelGPU : public GPU
{
public:
	void Display()
	{
		cout << "INTEL GPU Working" << endl;
	}
};
class IntelMEM : public MEM
{
public:
	void Storage()
	{
		cout << "INTEL MEM Working" << endl;
	}
};
//Lenovel
class LenovelCPU : public CPU
{
public:
	void Calculate()
	{
		cout << "LENOVEL CUP Working" << endl;
	}
};
class LenovelGPU : public GPU
{
public:
	void Display()
	{
		cout << "LENOVEL GPU Working" << endl;
	}
};
class LenovelMEM : public MEM
{
public:
	void Storage()
	{
		cout << "LENOVEL MEM Working" << endl;
	}
};

class Computer
{
public:
	Computer(CPU* cpu, GPU*gpu, MEM* mem)
	{
		m_CPU = cpu;
		m_GPU = gpu;
		m_MEM = mem;
	}
	void work()
	{
		m_CPU->Calculate();
		m_GPU->Display();
		m_MEM->Storage();
	}
	~Computer()
	{
		cout << "CALL DECONSTRUCTOR of computer" << endl;
		if (m_CPU != NULL)
		{
			delete m_CPU;
			m_CPU = NULL;
		}
		if (m_GPU != NULL)
		{
			delete m_GPU;
			m_GPU = NULL;
		}
		if (m_MEM != NULL)
		{
			delete m_MEM;
			m_MEM = NULL;
		}
	}
private:
	CPU* m_CPU;
	GPU* m_GPU;
	MEM* m_MEM;
};

void test01()
{

	//Build 1st Computer
	CPU* intelCPU = new IntelCPU;
	GPU* intelGPU = new IntelGPU;
	MEM* intelMEM = new IntelMEM;
	Computer* computer1 = new Computer(intelCPU, intelGPU, intelMEM);
	computer1->work();
	delete computer1;

	cout << "============================" << endl;
	//Build 2nd Computer
	Computer* computer2 = new Computer(new LenovelCPU, new LenovelGPU, new LenovelMEM);
	computer2->work();
	delete computer2;

	cout << "============================" << endl;
	//Build 3rd Computer
	Computer computer3(new IntelCPU, new IntelGPU, new LenovelMEM);
	computer3.work();
}

int main()
{

	test01();


	system("pause");

	return 0;
}