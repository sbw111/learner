#ifndef TODS_H
#define TODS_H
#include"CTeacher.h"
class TODS:public CTeacher{
public:
	long GetSalary();
	TODS(){
		classmoney=700; Setmoney();
	}
	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
private:
	int classmoney;
};
#endif