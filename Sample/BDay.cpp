#include "BDay.h"

BDay::BDay(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}


BDay::~BDay()
{
}

void BDay::printDate() {
	cout << day << "/" << month << "/" << year << endl;
}