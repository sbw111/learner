#include"CStaff.h"
#include<iostream>
#include<string>
using namespace std;
void CStaff::SetNo(string s){
	no=s;
}
string CStaff::GetNo(){
	return no;
}
void CStaff::SetName(string s){
	name=s;
}
string CStaff::GetName(){
	return name;
}
void CStaff::SetSex(bool t){
	sex=t;
}
bool CStaff::GetSex(){
	return sex;
}
void CStaff::SetServiceYears(int n){
	serviceyears=n;
}
int CStaff::GetServiceYears(){
	return serviceyears;
}
void CStaff::SetNumber(int n){
	number=n;
}
int CStaff::GetNumber(){
	return number;
}
ostream &operator<<(ostream &cout,CStaff &staff){
	if (staff.sort==2){
		cout<<"ְ��\t\t����\t\t����\t�Ա�\t����\t";
		cout<<"����"<<endl;
		if (staff.GetNumber()==1){ cout<<"һ��������Ա    "; }
		if (staff.GetNumber()==2){ cout<<"�Ƽ�������Ա    "; }
		if (staff.GetNumber()==3){ cout<<"����������Ա    "; }
		cout<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t";
		if (staff.GetSex()) cout<<"��\t"; else cout<<"Ů\t";
		cout<<staff.GetServiceYears()<<"\t";
		cout<<staff.GetSalary()<<endl;
	}
	else{
		cout<<"ְ��\t\t����\t\t����\t�Ա�\t����\t";
		cout<<"����"<<endl;
		cout<<"��ʱ��Ա    "<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t";
		if (staff.GetSex()) cout<<"��\t"; else cout<<"Ů\t";
		cout<<staff.GetServiceYears()<<"\t";
		cout<<staff.GetSalary()<<endl;
	}
	return cout;
}