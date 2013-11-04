#include"CStaff.h"
#include"Menu.h"
#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
void main(){
	int n;
	Menu menu;
	cout<<"欢迎来到教职工工资管理系统！"<<endl;
	while(!menu.ex){
		cout<<"1)查询员工"<<endl;
		cout<<"2)添加员工"<<endl;
		cout<<"3)修改员工"<<endl;
		cout<<"4)删除员工"<<endl;
		cout<<"5)结束程序"<<endl;
		cin>>n;
		switch(n){
			case 1:
				menu.inquire();
				break;
			case 2:
				menu.add();
				break;
			case 3:
				menu.mod();
				break;
			case 4:
				menu.del();
				break;
			case 5:
				menu.exit();
				break;
			default :
				cout<<"输入错误，请重新输入。"<<endl;
		}
	}
}