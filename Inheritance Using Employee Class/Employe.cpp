#include "Employe.h"
#include <iostream>
#include <string>
using namespace std;

int Employee::no_of_employee = 0;
int Employee::get_no_employee() {
	return no_of_employee;
}
Employee::Employee(int a, string b)
	: empID(a), empName(b) {
	++no_of_employee;
}
void Employee::setter() {
	cout << "Enter Employee ID: ";
	cin >> empID;
	cout << "Enter Employee Name: ";
	getline(cin, empName);
}
void Employee::getter() const {
	cout << "Name: " << empName << " : " << " ID: " << empID << endl;
}
Employee::~Employee() {
	--no_of_employee;
}


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
	cout << "Position: " << position << " : " << " club dues: " << club_due << endl;
}

Scientist::Scientist(int id, string name, string f, int n)
	: Employee(id, name), field(f), no_of_projects(n) {

}
void Scientist::setter() {
	Employee::setter();
	cout << "Enter Scientist field: ";
	getline(cin, field);
	cout << "Enter no of Researches: ";
	cin >> no_of_projects;
}
void Scientist::getter() const {
	Employee::getter();
	cout << "Field: " << field << " : " << "No of Projects: " << no_of_projects << endl;
}

Labor::Labor(int id, string name, string s, int hour)
	: Employee(id, name), shift(s), hour_worked(hour) { }
void Labor::setter() {
	Employee::setter();
	cout << "Enter Shift: ";
	getline(cin, shift);
	cout << "Enter hour worked: ";
	cin >> hour_worked;
}
void Labor::getter() const {
	Employee::getter();
	cout << "shift: " << shift << " : " << "Hour worked: " << hour_worked << endl;
}