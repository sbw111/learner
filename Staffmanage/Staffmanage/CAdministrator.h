#ifndef CAdministrator_H
#define CAdministrator_H
#include"CStaff.h"
class CAdministrator:public CStaff{
public:
	CAdministrator(){
		agemoney=600;
	}
	long GetSalary();
//	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
private:
	int agemoney;
};
#endif