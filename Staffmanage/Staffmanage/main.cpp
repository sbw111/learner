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
	cout<<"��ӭ������ְ�����ʹ���ϵͳ��"<<endl;
	while(!menu.ex){
		cout<<"1)��ѯԱ��"<<endl;
		cout<<"2)���Ա��"<<endl;
		cout<<"3)�޸�Ա��"<<endl;
		cout<<"4)ɾ��Ա��"<<endl;
		cout<<"5)��������"<<endl;
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
				cout<<"����������������롣"<<endl;
		}
	}
}