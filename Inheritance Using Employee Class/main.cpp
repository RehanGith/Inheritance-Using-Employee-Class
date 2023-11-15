#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	int empID;
	string empName;
	static int no_of_employee;
public:
	static int get_no_employee();
	Employee(int a = 0, string b = "");

	void setter();
	void getter() const;
	~Employee();
};
int Employee::no_of_employee = 0;
int Employee::get_no_employee() {
	return no_of_employee;
}
 Employee::Employee(int a, string b) 
	 : empID(a) , empName(b) {
	 ++no_of_employee;
 }
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
	 --no_of_employee;
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
 class Scientist : public Employee {
 private:
	 string field;
	 int no_of_projects;
 public:
	 Scientist(int id =0, string name = "" ,string f = "", int n = 0);
	 void setter();
	 void getter() const;
 };
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
 class Labor : public Employee {
 private:
	 string shift;
	 int hour_worked;
 public:
	 Labor(int id = 0, string name = "", string s = "", int hour = 0);
	 void setter();
	 void getter() const;
 };
 Labor::Labor(int id , string name, string s , int hour)
	 : Employee(id , name), shift(s) , hour_worked(hour) { }
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