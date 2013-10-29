#include"Safearray.h"
#include<iostream>
using namespace std;
int& Safearray::operator[](int x){
	if (x>maxn){
		cout<<"Error!";
		return a[0];
	}
	else return a[x];
}
int& Safearray::operator=(int m){
	return m;
}