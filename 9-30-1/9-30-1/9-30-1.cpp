#include"array.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	int n,i,j,p;
	array f;
	cout<<"输入N并输入数组：";
	cin>>n;
	for (i=1;i<=n;i++) {
		cin>>p; f.write(i,p);
	}
	cout<<"读取第N个数？";
	cin>>n;
	cout<<f.read(n);
}