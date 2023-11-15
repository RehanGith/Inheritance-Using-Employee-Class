#pragma once
#include <string>
class Employee {
private:
	int empID;
	std::string empName;
	static int no_of_employee;
public:
	static int get_no_employee();
	Employee(int a = 0, std::string b = "");

	void setter();
	void getter() const;
	~Employee();
};

class Manager : public Employee {
private:
	std::string position;
	float club_due;
public:
	Manager(int id = 0, std::string name = "", std::string dsg = "", float dues = 0.0);
	void setter();
	void getter() const;
};
class Scientist : public Employee {
private:
	std::string field;
	int no_of_projects;
public:
	Scientist(int id = 0, std::string name = "", std::string f = "", int n = 0);
	void setter();
	void getter() const;
};
class Labor : public Employee {
private:
	std::string shift;
	int hour_worked;
public:
	Labor(int id = 0, std::string name = "", std::string s = "", int hour = 0);
	void setter();
	void getter() const;
};
