#include"CAdministrator.h"
#include<iostream>
using namespace std;
long CAdministrator::GetSalary(){
	if (number==1){
		return basemoney+GetServiceYears()*agemoney;
	}
	else if (number==2){
		return basemoney+GetServiceYears()*agemoney+6000;
	}
	else {
		return basemoney+GetServiceYears()*agemoney+8000;
	}
}
