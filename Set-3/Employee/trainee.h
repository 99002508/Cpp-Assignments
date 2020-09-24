#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"
#include <string>
using namespace std;

class Trainee : public Employee {
	private:
		string m_track;
		double scores;
	public:
		Trainee(string id, string name, double salary,int exp,string track_code,double score);
		double payroll();
		double appraisal();

};

#endif
