#include "People.h"



People::People(string n, BDay b)
: name(n), birthday(b)
{
	
}


People::~People()
{
}

void People::printInfo() {
	cout << "Name: " << name << "\tDOB: ";
	birthday.printDate();
}