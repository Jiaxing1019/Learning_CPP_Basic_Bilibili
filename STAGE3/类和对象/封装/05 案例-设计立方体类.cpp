#include <iostream>
#include <string>
using namespace std;

class Cube
{
public:
	void setL(int L)
	{
		m_L = L;
	}
	int getL()
	{
		return m_L;
	}

	void setW(int W)
	{
		m_W = W;
	}
	int getW()
	{
		return m_W;
	}

	void setH(int H)
	{
		m_H = H;
	}
	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
	}

	int calculateV()
	{
		return m_L * m_W * m_L;
	}

	bool compareCube(Cube& Cu)
	{
		if (getL() == Cu.getL() && getW() == Cu.getW() && getH() == Cu.getH())
		{
			return true;
		}
		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};


bool compareCube(Cube& Cu1, Cube& Cu2)
{
	if (Cu1.getL() == Cu2.getL() && Cu1.getW() == Cu2.getW() && Cu1.getH() == Cu2.getH())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube Cu1;
	Cu1.setL(10);
	Cu1.setW(10);
	Cu1.setH(10);
	cout << "Cube1 S = " << Cu1.calculateS() << endl;
	cout << "Cube1 V = " << Cu1.calculateV() << endl;

	Cube Cu2;
	Cu2.setL(10);
	Cu2.setW(10);
	Cu2.setH(10);
	cout << "Cube2 S = " << Cu2.calculateS() << endl;
	cout << "Cube2 V = " << Cu2.calculateV() << endl;

	bool ret = compareCube(Cu1, Cu2);
	if (ret == true)
	{
		cout << "Same Cube" << endl;
	}
	else
	{
		cout << "Different Cubes" << endl;
	}

	ret = Cu1.compareCube(Cu2);
	if (ret == true)
	{
		cout << "Same Cube" << endl;
	}
	else
	{
		cout << "Different Cubes" << endl;
	}

	system("pause");

	return 0;
}