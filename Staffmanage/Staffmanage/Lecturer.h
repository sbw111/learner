#ifndef Lecturer_H
#define Lecturer_H
#include"CTeacher.h"
class Lecturer:public CTeacher{
public:
	long GetSalary();
	Lecturer(){
		classmoney=250; Setmoney();
	}
	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
private:
	int classmoney;
};
#endif