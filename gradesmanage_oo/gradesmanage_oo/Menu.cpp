#include<iostream>
#include<string>
#include<stdlib.h>
#include"Menu.h"
using namespace std;
int Menu::find(string s){
	for (int i=1;i<=len;i++){
		if (s==student[i].name) return i;
	}
	return len+1;
}
void Menu::list(){
	cout<<"姓名\t\t"<<"学号\t\t"<<"成绩"<<endl;
	for (int i=1;i<=len;i++){
		cout<<student[i].name<<"\t\t"<<student[i].number<<"\t\t"<<student[i].grade<<endl;
	}
}
void Menu::addstudent(){
	string s;
	long number;
	cout<<"姓名：";
	cin>>s;
	cout<<"学号：";
	cin>>number;
	int i=find(s);
	if (i>len){
		len++;
		student[len].name=s;
		student[len].number=number;
		student[len].grade=0;
	}
}
void Menu::deletestudent(){
	string s;
	long number;
	cout<<"姓名：";
	cin>>s;
	cout<<"学号：";
	cin>>number;
	int i=find(s);
	if (i<len) cout<<"没有该学生"<<endl;
	else{
		for (int j=i;j<=len-1;j++){
			student[j].name=student[j+1].name;
			student[j].number=student[j+1].number;
		}
		len--;
	}
}
void Menu::addgrades(){
	bool f=true;
	long number,grade;
	string s;
	char c;
	while (f){
		cout<<"姓名：";
		cin>>s;
		cout<<"学号：";
		cin>>number;
		cout<<"成绩：";
		cin>>grade;
		int i=find(s);
		if (i>len) cout<<"没有该学生!"<<endl;
		else {
			student[i].grade=grade;
		}
		cout<<"是否继续?(Y/N):";
		cin>>c;
		if (c=='N') f=false;
	}
}
void Menu::exit(){
	cout<<"退出程序"<<endl;
	ex=true;
}