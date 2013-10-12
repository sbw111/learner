#include"array.h"
#include<iostream>
using namespace std;
int array::read(int x){
	if (x>maxn){
		cout<<"Error!";
		return -1000;
	}
	else return a[x];
}
void array::write(int n,int m){
	if (n>maxn) cout<<"Error!"<<endl;
	else a[n]=m;
}