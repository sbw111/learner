#include"fun.h"
#include<iostream>
using namespace std;
bool fun::add(int num)
{
	if (len<maxn){
		len++; a[len]=num; return true;
	}
	else return false;
}
void fun::pri(){
	for (int i=1;i<=len;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
