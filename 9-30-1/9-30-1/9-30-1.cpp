#include"array.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	int n,i,j,p;
	array f;
	cout<<"����N���������飺";
	cin>>n;
	for (i=1;i<=n;i++) {
		cin>>p; f.write(i,p);
	}
	cout<<"��ȡ��N������";
	cin>>n;
	cout<<f.read(n);
}