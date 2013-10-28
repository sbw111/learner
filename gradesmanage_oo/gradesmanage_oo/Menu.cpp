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
	cout<<"����\t\t"<<"ѧ��\t\t"<<"�ɼ�"<<endl;
	for (int i=1;i<=len;i++){
		cout<<student[i].name<<"\t\t"<<student[i].number<<"\t\t"<<student[i].grade<<endl;
	}
}
void Menu::addstudent(){
	string s;
	long number;
	cout<<"������";
	cin>>s;
	cout<<"ѧ�ţ�";
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
	cout<<"������";
	cin>>s;
	cout<<"ѧ�ţ�";
	cin>>number;
	int i=find(s);
	if (i<len) cout<<"û�и�ѧ��"<<endl;
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
		cout<<"������";
		cin>>s;
		cout<<"ѧ�ţ�";
		cin>>number;
		cout<<"�ɼ���";
		cin>>grade;
		int i=find(s);
		if (i>len) cout<<"û�и�ѧ��!"<<endl;
		else {
			student[i].grade=grade;
		}
		cout<<"�Ƿ����?(Y/N):";
		cin>>c;
		if (c=='N') f=false;
	}
}
void Menu::exit(){
	cout<<"�˳�����"<<endl;
	ex=true;
}