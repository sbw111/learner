#include<iostream>
#include<string>
#include"computer.h"
using namespace std;
void computer::list(){
	int i;
	cout<<"�ͺ�\t"<<"CPU\t"<<"�ڴ�����\t"<<"Ӳ������\t"<<"�������"<<endl;
	for (i=1;i<=len;i++){
		cout<<model[i]<<"\t"<<cpu[i]<<"\t"<<memory[i]<<"\t\t"<<disk[i]<<"\t\t"<<num[i]<<endl;
	}
}
void computer::enter(){
	string ch;
	int n,i,j;
	bool t=false;
	cout<<"����������ͺ�:";
	cin>>ch;
	cout<<"�������������:";
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
		cout<<"���Ǹ����ͺţ�������CPU�ͺ�:";
		cin>>cpu[len];
		cout<<"�������ڴ�����:";
		cin>>memory[len];
		cout<<"������Ӳ������:";
		cin>>disk[len];
		num[len]=n;
	}
	cout<<"��ӳɹ�!"<<endl;
}
void computer::out(){
	string ch;
	int n,i;
	bool t=false;
	cout<<"����������ͺ�:";
	cin>>ch;
	for (i=1;i<=len;i++){
		if (ch==model[i]){
			t=true;
			cout<<"��������������:";
			cin>>n;
			num[i]-=n;
			cout<<"�����ɹ�!"<<endl;
			break;
		}
	}
	if (t==false) cout<<"������޸��ͺŵ���!"<<endl;
}