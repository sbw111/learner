#include"fun.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	bool t=true;
	int n,k;
	char c='E';
	cout<<"数组大小:";
	cin>>n;
	fun f1(n);
	while (1){
		if ((c=='E')||(c=='P')||(c=='R')) {	cout<<"输入R进行数组输入，输入P打印数组，输入E结束"<<endl; }
		cin>>c;
		if (c=='E') {exit(0);}
		else if (c=='P') {f1.pri();}
		else if (c=='R'){
			cout<<"输入个数：";
			cin>>n;
			for (int i=1;i<=n;i++){
				cin>>k;
				if (f1.add(k)==false){
					cout<<"数组已满 无法添加！"<<endl;
					break;
				}
			}
		}
	}
}