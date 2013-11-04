#include"Lecturer.h"
long Lecturer::GetSalary(){
	return basemoney+GetServiceYears()*agemoney+classmoney*classnum;
}