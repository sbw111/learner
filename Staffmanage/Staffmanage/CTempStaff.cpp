#include"CTempStaff.h"
#include<iostream>
using namespace std;
std::ostream &operator<<(std::ostream &cout,CStaff &staff){
	cout<<"ְ��\t\t����\t\t����\t\t�Ա�\t\t����\t\t";
	cout<<"����"<<endl;
	cout<<"��ʱ��Ա\t\t"<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t\t";
	if (staff.GetSex()) cout<<"��\t\t"; else cout<<"Ů\t\t";
	cout<<staff.GetServiceYears()<<"\t\t";
	cout<<staff.GetSalary()<<endl;
	return cout;
}