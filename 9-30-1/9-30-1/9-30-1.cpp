#include"fun.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	bool t=true;
	int n,k;
	char c;
	cout<<"�����С:";
	cin>>n;
	fun f1(n);
	while (1){
		cout<<"����R�����������룬����P��ӡ���飬����E����"<<endl;
		cin>>c;
		if (c=='E') {exit(0);}
		else if (c=='P') {f1.pri();}
		else {
			cout<<"���������";
			cin>>n;
			for (int i=1;i<=n;i++){
				cin>>k;
				if (f1.add(k)==false){
					cout<<"�������� �޷���ӣ�"<<endl;
					break;
				}
			}
		}
	}
}