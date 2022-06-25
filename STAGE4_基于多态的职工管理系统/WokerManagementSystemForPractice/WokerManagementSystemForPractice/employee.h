#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include <string>

class Employee : public Worker
{
public:
	Employee(int id, string name, int type);
	void showInfo();
	string getType();
};