#include <iostream>
#include "Employe.h"
using namespace std;

int main() {
	Employee e;
	e.setter();
	e.getter();
	Manager m;
	m.setter();
	m.getter();
	Scientist s;
	s.setter();
	s.getter();
	Labor l;
	l.setter();
	l.getter();
	return 0;
}