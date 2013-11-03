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
std::ostream &operator<<(std::ostream &cout,CStaff &staff){
	cout<<"职务\t\t工号\t\t姓名\t\t性别\t\t工龄\t\t";
	cout<<"工资"<<endl;
	if (staff.GetNumber()==1){ cout<<"一般行政人员\t\t"; }
	if (staff.GetNumber()==2){ cout<<"科级行政人员\t\t"; }
	if (staff.GetNumber()==3){ cout<<"处级行政人员\t\t"; }
	cout<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t\t";
	if (staff.GetSex()) cout<<"男\t\t"; else cout<<"女\t\t";
	cout<<staff.GetServiceYears()<<"\t\t";
	cout<<staff.GetSalary()<<endl;
	return cout;
}