#pragma once
#include "BDay.h"
#include <string>
using namespace std;

class People
{
public:
	People(string n, BDay b);
	~People();
	void printInfo();
private:
	BDay birthday;
	string name;
};

