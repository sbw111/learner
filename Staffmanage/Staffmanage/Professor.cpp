#include"Professor.h"
long Professor::GetSalary(){
	return basemoney+GetServiceYears()*agemoney+classmoney*classnum+studentmoney*studentnum;
}