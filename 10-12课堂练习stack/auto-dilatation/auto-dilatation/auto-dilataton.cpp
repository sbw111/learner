#include<iostream>
#include<stdlib.h>
#include"stack.h"
using namespace std;
void main(){
	stack1 a;
//	cout<<a.head->data;
	int n,i,j;
	while (1){
		cout<<"1.输入 2.弹出 3.打印 4.结束："<<endl;
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