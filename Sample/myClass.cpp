#include <iostream>
#include "myClass.h"

using namespace std;

myClass::myClass(int a, int b)
	: regVar(a),
	constVar(b)
{

	cout << "Constructor called" << endl;
}

myClass::~myClass() {
	cout << "Deconstructor called" << endl;
}

void myClass::print() {
	cout << "Regular: " << regVar << " Constant: " << constVar << endl;
}