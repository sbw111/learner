#include<iostream>
#include<string>
#include"computer.h"
using namespace std;
void computer::list(){
	int i;
	cout<<"型号\t"<<"CPU\t"<<"内存容量\t"<<"硬盘容量\t"<<"库存数量"<<endl;
	for (i=1;i<=len;i++){
		cout<<model[i]<<"\t"<<cpu[i]<<"\t"<<memory[i]<<"\t\t"<<disk[i]<<"\t\t"<<num[i]<<endl;
	}
}
void computer::enter(){
	string ch;
	int n,i,j;
	bool t=false;
	cout<<"请输入电脑型号:";
	cin>>ch;
	cout<<"请输入入库数量:";
	cin>>n;
	for (i=1;i<=len;i++){
		if (ch==model[i]){
			t=true;
			num[i]+=n; break;
		}
	}
	if (t==false){
		len++;
		model[len]=ch;
		cout<<"这是个新型号，请输入CPU型号:";
		cin>>cpu[len];
		cout<<"请输入内存容量:";
		cin>>memory[len];
		cout<<"请输入硬盘容量:";
		cin>>disk[len];
		num[len]=n;
	}
	cout<<"添加成功!"<<endl;
}
void computer::out(){
	string ch;
	int n,i;
	bool t=false;
	cout<<"请输入电脑型号:";
	cin>>ch;
	for (i=1;i<=len;i++){
		if (ch==model[i]){
			t=true;
			cout<<"请输入卖出数量:";
			cin>>n;
			num[i]-=n;
			cout<<"操作成功!"<<endl;
			break;
		}
	}
	if (t==false) cout<<"库存中无该型号电脑!"<<endl;
}