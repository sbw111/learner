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
	fstream file("e:\\Staff.dat",ios::in);
	ex=false; stafflen=0; teacherlen=0;
	while (!(file.eof())){
		file>>sort>>no>>name>>sex>>serviceyears;
		if (file.eof()) break;
		if (sort==1){
			stafflen++;
			staff[stafflen]=new CTempStaff(); 
		}
		if (sort==2){
			stafflen++;
			staff[stafflen]=new CAdministrator();
			file>>num; staff[stafflen]->SetNumber(num);
		}
		if (sort==3){
			teacherlen++;
			teacher[teacherlen]=new Lecturer();
			file>>classnum; teacher[teacherlen]->SetClassNum(classnum);
		}
		if (sort==4){
			teacherlen++;
			teacher[teacherlen]=new Professor();
			file>>classnum; teacher[teacherlen]->SetClassNum(classnum);
			file>>studentnum; teacher[teacherlen]->SetStudentNum(studentnum);
		}
		if (sort==5){
			teacherlen++;
			teacher[teacherlen]=new TODS();
			file>>classnum; teacher[teacherlen]->SetClassNum(classnum);
			file>>studentnum; teacher[teacherlen]->SetStudentNum(studentnum);
			file>>dstudentnum; teacher[teacherlen]->SetDStudentNum(studentnum);
		}
		if (sort<3){
			staff[stafflen]->sort=sort; staff[stafflen]->SetNo(no);
			staff[stafflen]->SetName(name);
			staff[stafflen]->SetSex(sex); 
			staff[stafflen]->SetServiceYears(serviceyears);	
		}
		else{
			teacher[teacherlen]->sort=sort; 
			teacher[teacherlen]->SetNo(no);
			teacher[teacherlen]->SetName(name);
			teacher[teacherlen]->SetSex(sex); 
			teacher[teacherlen]->SetServiceYears(serviceyears);	
		}
	}
	file.close();
}
Menu::~Menu(){
	system("del E://Staff.dat");
	fstream file("E://Staff.dat",ios::out);
	for (int i=1;i<=stafflen;i++){
		file<<staff[i]->sort<<" "<<staff[i]->GetNo()<<" ";
		file<<staff[i]->GetName()<<" "<<staff[i]->GetSex()<<" ";
		file<<staff[i]->GetServiceYears()<<" ";
		if (staff[i]->sort==2){
			file<<staff[i]->GetNumber()<<endl;
		}
		else file<<endl;
	}
	for (int i=1;i<=teacherlen;i++){
		file<<teacher[i]->sort<<" "<<teacher[i]->GetNo()<<" ";
		file<<teacher[i]->GetName()<<" "<<teacher[i]->GetSex()<<" ";
		file<<teacher[i]->GetServiceYears()<<" ";
		if (teacher[i]->sort==3){
			file<<teacher[i]->GetClassNum()<<endl;
		}
		if (teacher[i]->sort==4){
			file<<teacher[i]->GetClassNum()<<" ";
			file<<teacher[i]->GetStudentNum()<<endl;
		}
		if (teacher[i]->sort==5){
			file<<teacher[i]->GetClassNum()<<" ";
			file<<teacher[i]->GetStudentNum()<<" ";
			file<<teacher[i]->GetDStudentNum()<<endl;
		}
	}
	file.close();
	for (int i=1;i<=stafflen;i++)
		delete staff[i];
	for (int i=1;i<=teacherlen;i++)
		delete teacher[i];
}
int Menu::find(string s){
	for (int i=1;i<=stafflen;i++)
		if (staff[i]->GetNo()==s) return (i*10+1);
	for (int i=1;i<=teacherlen;i++)
		if (teacher[i]->GetNo()==s) return (i*10+2);
	return 0;
}
void Menu::del(){
	string s;
	char c;
	cout<<"������Ҫɾ����Ա�����ţ�";
	cin>>s;
	int i=find(s);
	int k=i%10; i=i/10;
	if (i==0){
		cout<<"û�и�Ա����";
	}
	else if (k==1){
		cout<<"�Ƿ�ɾ��Ա�� "<<staff[i]->GetName()<<" (Y/N)?:";
		cin>>c;
		if (c=='Y'){
			for (int j=i;j<stafflen;j++)
				staff[j]=staff[j+1];
			cout<<"ɾ���ɹ���"<<endl;
		}
	}
	else {
		cout<<"�Ƿ�ɾ��Ա�� "<<teacher[i]->GetName()<<" (Y/N)?:";
		cin>>c;
		if (c=='Y'){
			for (int j=i;j<teacherlen;j++)
				teacher[j]=teacher[j+1];
			cout<<"ɾ���ɹ���"<<endl;
		}
	}
}
void Menu::exit(){
	ex=true;
}
void Menu::inquire(){
	string s;
	cout<<"������Ҫ�����߹���:";
	cin>>s;
	int i=find(s);
	int k=i%10; i=i/10;
	if (i==0){
		cout<<"���޴���"<<endl;
	}
	else if(k==1){
		cout<<*staff[i];
	}
	else cout<<*teacher[i];
}
void Menu::mod(){
	string no,name;
	int sort,serviceyears,n;
	int studentnum,classnum,dstudentnum;
	cout<<"������Ҫ�޸ĵ�Ա�����ţ�";
	cin>>no;
	int i=find(no);
	int k=i%10; i=i/10;
	if (i==0){
		cout<<"û�и�Ա����";
	}
	else if(k==1) {
		cout<<"���潫���и�Ա����Ϣ������"<<endl;
		cout<<"��ְ����1)��ʱ��Ա 2)һ��������Ա 3)�Ƽ�������Ա 4)����������Ա:";
		cin>>sort;
		cout<<"�Ա�Ϊ1)�� 2)Ů:";
		cin>>n;
		if (n==1) { staff[i]->SetSex(true);} 
		else { staff[i]->SetSex(false);}
		cout<<"����Ϊ:";
		cin>>serviceyears;
		staff[i]->SetServiceYears(serviceyears);
		if (sort==1) {staff[i]->sort=1;}
		else {
			staff[i]->sort=2;
			staff[i]->SetNumber(sort-1);
		}
	}
	else{
		cout<<"���潫���и�Ա����Ϣ������"<<endl;
		cout<<"��ְ���� 1)��ʦ 2)���� 3)����:";
		cin>>sort;
		cout<<"�Ա�Ϊ1)�� 2)Ů:";
		cin>>n;
		if (n==1) { teacher[i]->SetSex(true); } 
		else { teacher[i]->SetSex(false); }
		cout<<"����Ϊ:";
		cin>>serviceyears;
		teacher[i]->SetServiceYears(serviceyears);
		if (sort==1){
			teacher[i]->sort=sort+2;
			cout<<"��ʱ��Ϊ:";
			cin>>classnum; teacher[i]->SetClassNum(classnum);
		}
		if (sort==2){
			teacher[i]->sort=sort+2;
			cout<<"��ʱ��Ϊ:";
			cin>>classnum; teacher[i]->SetClassNum(classnum);
			cout<<"����˶ʿ��Ϊ:";
			cin>>studentnum; teacher[i]->SetStudentNum(studentnum);
		}
		if (sort==3){
			teacher[i]->sort=sort+2;
			cout<<"��ʱ��Ϊ:";
			cin>>classnum; teacher[i]->SetClassNum(classnum);
			cout<<"����˶ʿ��Ϊ:";
			cin>>studentnum; teacher[i]->SetStudentNum(studentnum);
			cout<<"������ʿ��Ϊ:";
			cin>>dstudentnum; teacher[i]->SetDStudentNum(dstudentnum);
		}
	}
}
void Menu::add(){
	string no,name;
	int sort,serviceyears,n;
	int studentnum,classnum,dstudentnum;
	int i;
	cout<<"��ְ����1)��ʱ��Ա 2)һ��������Ա 3)�Ƽ�������Ա 4)����������Ա 5)��ʦ 6)���� 7)����:";
	cin>>sort;
	if (sort==1) {
		stafflen++; i=stafflen;
		staff[i]=new CTempStaff();
		staff[i]->sort=1;
	}
	else if (sort<5){
		stafflen++; i=stafflen;
		staff[i]=new CAdministrator();
		staff[i]->sort=2;
		staff[i]->SetNumber(sort-1);
	}
	if (sort==5){
		teacherlen++; i=teacherlen;
		teacher[i]=new Lecturer();
		teacher[i]->sort=sort-2;
		cout<<"��ʱ��Ϊ:";
		cin>>classnum; teacher[i]->SetClassNum(classnum);
	}
	if (sort==6){
		teacherlen++; i=teacherlen;
		teacher[i]=new Professor();
		teacher[i]->sort=sort-2;
		cout<<"��ʱ��Ϊ:";
		cin>>classnum; teacher[i]->SetClassNum(classnum);
		cout<<"����˶ʿ��Ϊ:";
		cin>>studentnum; teacher[i]->SetStudentNum(studentnum);
	}
	if (sort==7){
		teacherlen++; i=teacherlen;
		teacher[i]=new TODS();
		teacher[i]->sort=sort-2;
		cout<<"��ʱ��Ϊ:";
		cin>>classnum; teacher[i]->SetClassNum(classnum);
		cout<<"����˶ʿ��Ϊ:";
		cin>>studentnum; teacher[i]->SetStudentNum(studentnum);
		cout<<"������ʿ��Ϊ:";
		cin>>dstudentnum; teacher[i]->SetDStudentNum(dstudentnum);
	}
	if (sort<5){
		cout<<"������Ա������:";
		cin>>name; staff[i]->SetName(name);
		cout<<"������Ա������:";
		cin>>no; staff[i]->SetNo(no);
		cout<<"�Ա�Ϊ1)�� 2)Ů:";
		cin>>n;
		if (n==1) staff[i]->SetSex(true); else staff[i]->SetSex(false);
		cout<<"����Ϊ:";
		cin>>serviceyears;
		staff[i]->SetServiceYears(serviceyears);
	}
	else{
		cout<<"������Ա������:";
		cin>>name; teacher[i]->SetName(name);
		cout<<"������Ա������:";
		cin>>no; teacher[i]->SetNo(no);
		cout<<"�Ա�Ϊ1)�� 2)Ů:";
		cin>>n;
		if (n==1) teacher[i]->SetSex(true); else teacher[i]->SetSex(false);
		cout<<"����Ϊ:";
		cin>>serviceyears;
		teacher[i]->SetServiceYears(serviceyears);
	}
}