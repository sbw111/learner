#include<iostream>
#include<stdlib.h>
#include"computer.h";
using namespace std;
void main(){
	int i,j,n;
	computer a;
	while (1){
		cout<<"1)�鿴���"<<endl;
		cout<<"2)�������"<<endl;
		cout<<"3)����"<<endl;
		cout<<"4)�˳�����"<<endl;
		cin>>n;
		switch(n){
			case 1:
				a.list();
				break;
			case 2:
				a.enter();
				break;
			case 3:
				a.out();
				break;
			case 4:
				exit(0);
			default :
				cout<<"����Ĳ˵�����������롣"<<endl;
		}
	}

}