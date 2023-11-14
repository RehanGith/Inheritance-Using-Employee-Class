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
	 cout <<"Name: " << empName << " : " << " ID: " << empID << endl;
 }
 Employee::~Employee() {

}

 class Manager : public Employee {
 private:
	 string position;
	 float club_due;
 public:
	 Manager(int id = 0, string name = "", string dsg = "", float dues = 0.0);
	 void setter();
	 void getter() const;
 };
 Manager::Manager(int id, string name, string dsg, float dues)
	 : Employee(id, name), position(dsg), club_due(dues) {

 }
 void Manager::setter() {
	 Employee::setter();
	 cout << "Enter Manager Position: ";
	 getline(cin, position);
	 cout << "Enter Manager Club_dues: ";
	 cin >> club_due;
 }
 void Manager::getter() const {
	 Employee::getter();
	 cout << "Position: "<<  position << " : " << " club dues: " << club_due << endl;
 }
int main() {

}