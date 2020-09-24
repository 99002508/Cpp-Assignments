#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include <string>
using namespace std;


class IEmployee {
  public:
	virtual double payroll()=0;
	virtual double appraisal()=0;
};


class Employee:public IEmployee {
  
  private:
	string m_empid;
	string m_name;
	double m_salary;
	int m_exp;
  
  public:
	Employee(string id, string name, double salary,int exp);
	void display();
	int salary();
};

#endif
