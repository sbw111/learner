#include"fun.h"
#include<iostream>
using namespace std;
bool fun::add(int num)
{
	if (n<maxn){
		n++; a[n]=num; return true;
	}
	else return false;
}
void fun::pri(){
	for (int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
