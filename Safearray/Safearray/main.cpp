#include<iostream>
#include"Safearray.h"
using namespace std;
void main(){
	int n,m;
	Safearray a;
	cin>>n>>m;
	a[n]=m;
	cout<<a[n];
}