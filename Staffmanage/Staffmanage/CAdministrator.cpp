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
	cout<<"ְ��\t\t����\t\t����\t\t�Ա�\t\t����\t\t";
	cout<<"����"<<endl;
	if (staff.GetNumber()==1){ cout<<"һ��������Ա\t\t"; }
	if (staff.GetNumber()==2){ cout<<"�Ƽ�������Ա\t\t"; }
	if (staff.GetNumber()==3){ cout<<"����������Ա\t\t"; }
	cout<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t\t";
	if (staff.GetSex()) cout<<"��\t\t"; else cout<<"Ů\t\t";
	cout<<staff.GetServiceYears()<<"\t\t";
	cout<<staff.GetSalary()<<endl;
	return cout;
}