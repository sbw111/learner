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
void CStaff::SetStudentNum(int n){
	studentnum=n;
}
int CStaff::GetStudentNum(){
	return studentnum;
}
void CStaff::SetDStudentNum(int n){
	dstudentnum=n;
}
int CStaff::GetDStudentNum(){
	return dstudentnum;
}
void CStaff::SetClassNum(int n){
	classnum=n;
}
int CStaff::GetClassNum(){
	return classnum;
}
void CStaff::SetNumber(int n){
	number=n;
}
int CStaff::GetNumber(){
	return number;
}