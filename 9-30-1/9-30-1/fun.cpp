#include"fun.h"
#include<iostream>
using namespace std;
int fun::read(int x){
	if (x>maxn){
		cout<<"Error!";
		return -1000;
	}
	else return a[x];
}
void fun::write(int n,int m){
	if (n>maxn) cout<<"Error!"<<endl;
	else a[n]=m;
}