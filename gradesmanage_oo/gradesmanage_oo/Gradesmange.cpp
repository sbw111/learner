#include"Gradesmanage.h"
#include<iostream>
using namespace std;
void Gradesmanage::run(){
	int n,k;
	while (!menu.ex){
		cout<<"1)�鿴ѧ������"<<endl;
		cout<<"2)ѡ��"<<endl;
		cout<<"3)��ѡ"<<endl;
		cout<<"4)¼��ɼ�"<<endl;
		cout<<"5)�˳�����"<<endl;
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
				cout<<"����������������롣"<<endl;
		}
	}
}
