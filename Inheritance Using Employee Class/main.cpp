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
 Employee::Employee(int a, string b) 
	 : empID(a) , empName(b) {  }
 void Employee::setter() {
	 cout << "Enter Employee ID: ";
	 cin >> empID;
	 cout << "Enter Employee Name: ";
	 getline(cin, empName);
 }
 void Employee::getter() const {
	 cout << empName << " : " << empID << endl;
 }
 Employee::~Employee() {

}
int main() {

}