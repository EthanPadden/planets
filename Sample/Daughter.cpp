#include "Mother.h"
#include "Daughter.h"

#include <iostream>

using namespace std;


Daughter::Daughter()
{
}


Daughter::~Daughter()
{
}

void Daughter::showProtected() {
	proVar = 1;
	cout << proVar << endl;
}