#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include <string>

class Manager : public Worker
{
public:
	Manager(int id, string name, int type);
	void showInfo();
	string getType();
};