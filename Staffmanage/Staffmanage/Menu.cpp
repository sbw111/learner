#include"CAdministrator.h"
#include"Lecturer.h"
#include"Professor.h"
#include"TODS.h"
#include"CTempStaff.h"
#include"Menu.h"
#include"CTeacher.h"
#include"CStaff.h"
#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
Menu::Menu(){
	bool sex;
	string no,name;
	int sort,num,serviceyears;
	int studentnum,classnum,dstudentnum;
	fstream file("E://Staff.dat",ios::in);
	ex=false; len=0;
	while (!file.eof()){
		file>>sort>>no>>name>>sex>>serviceyears;
		len++;
		if (sort==1){ staff[len]=new CTempStaff(); }
		if (sort==2){
			staff[len]=new CAdministrator();
			file>>num; staff[len]->SetNumber(num);
		}
		if (sort==3){
			staff[len]=new Lecturer();
			file>>classnum; staff[len]->SetClassNum(classnum);
		}
		if (sort==4){
			staff[len]=new Professor();
			file>>classnum; staff[len]->SetClassNum(classnum);
			file>>studentnum; staff[len]->SetStudentNum(studentnum);
		}
		if (sort==5){
			staff[len]=new TODS();
			file>>classnum; staff[len]->SetClassNum(classnum);
			file>>studentnum; staff[len]->SetStudentNum(studentnum);
			file>>dstudentnum; staff[len]->SetDStudentNum(studentnum);
		}
		staff[len]->sort=sort; staff[len]->SetNo(no);
		staff[len]->SetName(name);
		staff[len]->SetSex(sex); 
		staff[len]->SetServiceYears(serviceyears);	
	}
	file.close();
}
Menu::~Menu(){
	system("del E://Staff.dat");
	fstream file("E://Staff.dat",ios::out);
	for (int i=1;i<=len;i++){
		file<<staff[i]->sort<<" "<<staff[i]->GetNo()<<" ";
		file<<staff[i]->GetName()<<" "<<staff[i]->GetSex()<<" ";
		file<<staff[i]->GetServiceYears()<<" ";
		if (staff[i]->sort==2){
			file<<staff[i]->GetNumber()<<endl;
		}
		if (staff[i]->sort==3){
			file<<staff[i]->GetClassNum()<<endl;
		}
		if (staff[i]->sort==4){
			file<<staff[i]->GetClassNum()<<" ";
			file<<staff[i]->GetStudentNum()<<endl;
		}
		if (staff[i]->sort==5){
			file<<staff[i]->GetClassNum()<<" ";
			file<<staff[i]->GetStudentNum()<<" ";
			file<<staff[i]->GetDStudentNum()<<endl;
		}
	}
	file.close();
	for (int i=1;i<=len;i++)
		delete staff[i];
}
int Menu::find(string s){
	for (int i=1;i<=len;i++)
		if (staff[len]->GetNo()==s) return i;
	return len+1;
}
void Menu::del(){
	string s;
	char c;
	cout<<"请输入要删除的员工工号：";
	cin>>s;
	int i=find(s);
	if (i>len){
		cout<<"没有该员工！";
	}
	else{
		cout<<"是否删除员工 "<<staff[i]->GetName()<<" (Y/N)?:";
		cin>>c;
		if (c=='Y'){
			for (int j=i;j<len;j++)
				staff[j]=staff[j+1];
			cout<<"删除成功！"<<endl;
		}
	}
}
void Menu::exit(){
	ex=true;
}
void Menu::inquire(){
	string s;
	cout<<"请输入要查找者工号:";
	cin>>s;
	int i=find(s);
	if (i>len){
		cout<<"查无此人"<<endl;
	}
	else{
		cout<<staff[i];
	}
}
void Menu::mod(){
	string no,name;
	int sort,num,serviceyears,n;
	int studentnum,classnum,dstudentnum;
	cout<<"请输入要修改的员工工号：";
	cin>>no;
	int i=find(no);
	if (i>len){
		cout<<"没有该员工！";
	}
	else{
		cout<<"下面将进行该员工信息的重置"<<endl;
		cout<<"其职务是1)临时人员 2)一般行政人员 3)科级行政人员 4)处级行政人员 5)讲师 6)教授 7)博导:";
		cin>>sort;
		cout<<"性别为1)男 2)女:";
		cin>>n;
		if (n==1) {staff[i]->SetSex(true);} 
		else {staff[i]->SetSex(false);}
		cout<<"工龄为:";
		cin>>serviceyears;
		staff[i]->SetServiceYears(serviceyears);
		if (sort==1) {staff[i]->sort=1;}
		else if (sort<5){
			staff[i]->sort=2;
			staff[i]->SetNumber(sort-1);
		}
		if (sort==5){
			staff[i]->sort=sort-2;
			cout<<"课时数为:";
			cin>>classnum; staff[i]->SetClassNum(classnum);
		}
		if (sort==6){
			staff[i]->sort=sort-2;
			cout<<"课时数为:";
			cin>>classnum; staff[i]->SetClassNum(classnum);
			cout<<"所带硕士生为:";
			cin>>studentnum; staff[i]->SetStudentNum(studentnum);
		}
		if (sort==7){
			staff[i]->sort=sort-2;
			cout<<"课时数为:";
			cin>>classnum; staff[i]->SetClassNum(classnum);
			cout<<"所带硕士生为:";
			cin>>studentnum; staff[i]->SetStudentNum(studentnum);
			cout<<"所带博士生为:";
			cin>>dstudentnum; staff[i]->SetDStudentNum(dstudentnum);
		}
	}
}
void Menu::add(){
	bool sex;
	string no,name;
	int sort,num,serviceyears,n;
	int studentnum,classnum,dstudentnum;
	len++;
	int i=len;
	cout<<"其职务是1)临时人员 2)一般行政人员 3)科级行政人员 4)处级行政人员 5)讲师 6)教授 7)博导:";
	cin>>sort;
	if (sort==1) {
		staff[i]=new CTempStaff();
		staff[i]->sort=1;
	}
	else if (sort<5){
		staff[i]=new CAdministrator();
		staff[i]->sort=2;
		staff[i]->SetNumber(sort-1);
	}
	if (sort==5){
		staff[i]=new Lecturer();
		staff[i]->sort=sort-2;
		cout<<"课时数为:";
		cin>>classnum; staff[i]->SetClassNum(classnum);
	}
	if (sort==6){
		staff[i]=new Professor();
		staff[i]->sort=sort-2;
		cout<<"课时数为:";
		cin>>classnum; staff[i]->SetClassNum(classnum);
		cout<<"所带硕士生为:";
		cin>>studentnum; staff[i]->SetStudentNum(studentnum);
	}
	if (sort==7){
		staff[i]=new TODS();
		staff[i]->sort=sort-2;
		cout<<"课时数为:";
		cin>>classnum; staff[i]->SetClassNum(classnum);
		cout<<"所带硕士生为:";
		cin>>studentnum; staff[i]->SetStudentNum(studentnum);
		cout<<"所带博士生为:";
		cin>>dstudentnum; staff[i]->SetDStudentNum(dstudentnum);
	}
	cout<<"请输入员工姓名:";
	cin>>name; staff[i]->SetName(name);
	cout<<"请输入员工工号:";
	cin>>no; staff[i]->SetNo(no);
	cout<<"性别为1)男 2)女:";
	cin>>n;
	if (n==1) staff[i]->SetSex(true); else staff[i]->SetSex(false);
	cout<<"工龄为:";
	cin>>serviceyears;
	staff[i]->SetServiceYears(serviceyears);
}