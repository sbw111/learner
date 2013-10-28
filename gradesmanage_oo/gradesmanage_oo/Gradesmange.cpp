#include"Gradesmanage.h"
#include<iostream>
using namespace std;
void Gradesmanage::run(){
	int n,k;
	while (!menu.ex){
		cout<<"1)查看学生名单"<<endl;
		cout<<"2)选课"<<endl;
		cout<<"3)退选"<<endl;
		cout<<"4)录入成绩"<<endl;
		cout<<"5)退出程序"<<endl;
		cin>>n;
		switch(n){
			case 1:
				menu.list();
				break;
			case 2:
				menu.addstudent();
				break;
			case 3:
				menu.deletestudent();
				break;
			case 4:
				menu.addgrades();
				break;
			case 5:
				menu.exit();
			default :
				cout<<"输入错误，请重新输入。"<<endl;
		}
	}
}
