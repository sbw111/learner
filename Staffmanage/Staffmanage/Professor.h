#ifndef Professor_H
#define Professor_H
#include"CTeacher.h"
class Professor:public CTeacher{
public:
	long GetSalary();
	Professor(){
		classmoney=500; Setmoney();
	}
	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
private:
	int classmoney;
};
#endif