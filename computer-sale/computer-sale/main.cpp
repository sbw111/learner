#include<iostream>
#include<stdlib.h>
#include"computer.h";
using namespace std;
void main(){
	int i,j,n;
	computer a;
	while (1){
		cout<<"1)查看库存"<<endl;
		cout<<"2)电脑入库"<<endl;
		cout<<"3)卖出"<<endl;
		cout<<"4)退出程序"<<endl;
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
				cout<<"错误的菜单项，请重新输入。"<<endl;
		}
	}

}