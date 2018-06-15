#pragma once
using namespace std;
#include <iostream>

class BDay
{
public:
	BDay(int d, int m, int y);
	void printDate();
	~BDay();

private:
	int day, month, year;
};

