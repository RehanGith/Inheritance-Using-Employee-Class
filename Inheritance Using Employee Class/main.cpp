#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	int empID;
	string empName;
public:
	Employee(int a = 0, string b = "");
	void setter();
	void getter() const;
	~Employee();
};

int main() {

}