#include<iostream>
#include<stdlib.h>
#include"stack.h"
using namespace std;
void main(){
	stack1 a;
//	cout<<a.head->data;
	int n,i,j;
	while (1){
		cout<<"1.���� 2.���� 3.��ӡ 4.������"<<endl;
		cin>>n;
		if (n==1){
			cin>>i;
			a.push(i);
		}
		else if (n==2){a.pop();}
		else if (n==3){a.print();}
		else exit(0);
	}
}