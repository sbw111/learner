#include"TODS.h"
long TODS::GetSalary(){
	return basemoney+GetServiceYears()*agemoney+classmoney*classnum+studentmoney*studentnum+dstudentmoney*dstudentnum;
}