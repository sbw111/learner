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
		cout<<"职务\t\t工号\t\t姓名\t性别\t工龄\t";
		cout<<"工资"<<endl;
		if (staff.GetNumber()==1){ cout<<"一般行政人员    "; }
		if (staff.GetNumber()==2){ cout<<"科级行政人员    "; }
		if (staff.GetNumber()==3){ cout<<"处级行政人员    "; }
		cout<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t";
		if (staff.GetSex()) cout<<"男\t"; else cout<<"女\t";
		cout<<staff.GetServiceYears()<<"\t";
		cout<<staff.GetSalary()<<endl;
	}
	else{
		cout<<"职务\t\t工号\t\t姓名\t性别\t工龄\t";
		cout<<"工资"<<endl;
		cout<<"临时人员    "<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t";
		if (staff.GetSex()) cout<<"男\t"; else cout<<"女\t";
		cout<<staff.GetServiceYears()<<"\t";
		cout<<staff.GetSalary()<<endl;
	}
	return cout;
}