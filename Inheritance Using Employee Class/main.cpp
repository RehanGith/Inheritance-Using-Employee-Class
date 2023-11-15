#include <iostream>
#include "Employe.h"
using namespace std;

int main() {
	Employee e1(10, "Rehan");
	e1.getter();
	Manager m(4404, "Rehan", "HR manager", 303000.0);
	m.getter();
	Scientist s(5035, "Muhammad Rehan", "Software Engineering", 10);
	s.getter();
	{
		Labor l(145, "Muhammad Rehan", "Morning", 16);
		l.getter();
	}
	cout << Employee::get_no_employee() << endl;
	return 0;
}