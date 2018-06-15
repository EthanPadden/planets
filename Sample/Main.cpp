#include <iostream>
#include "myClass.h"
#include "Class2.h"
#include "BDay.h"
#include "People.h"
#include "Mother.h"

#include "Daughter.h"

using namespace std;

void passByValue(int x);
void passByReference(int *x);

class Enemy {
protected:
	int attackPwr;
public:
	void setAttackPwr(int a) {
		attackPwr = a;
	}
};

class Ninja : public Enemy {
public:
	void attack() {
		cout << "Ninja Attack -" << attackPwr << endl;
	}
};

class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster Attack -" << attackPwr << endl;
	}
};
int main() {
	//myClass cls(2,3);
	//cls.print();
	
	int a = 13, b = 13;
	passByValue(a);
	passByReference(&b);

	cout << "a = " << a << ", b = " << b << endl;

	Class2 c;
	c.printThis();

	Class2 *p = &c;
	cout << p << endl;
	p->printThis();

	BDay myDOB(16, 2, 1999);
	People person("Ethan", myDOB);
	person.printInfo();
	
	Mother mum;
	mum.sayName();

	Daughter daughter;
	daughter.sayName();
	daughter.showProtected();

	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->setAttackPwr(10);
	enemy2->setAttackPwr(20);

	n.attack();
	m.attack();
	return 0;
}

void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) {
	*x = 99;
}