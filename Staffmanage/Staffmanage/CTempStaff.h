#ifndef CTempStaff_H
#define CTempStaff_H
#include"CStaff.h"
class CTempStaff:public CStaff{
public:
	long GetSalary(){
		return salary;
	}
	CTempStaff(){ 
		salary=(1000); 
	}
	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
private:
	long salary;
};
#endif