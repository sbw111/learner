#include<iostream>
using namespace std;
long f(int x,int y)
{
	if (y==1) return x;
	else return x*f(x,y-1);
}
void main(){
	int x,y;
	cout<<"ÊäÈëx,y£º";
	cin>>x>>y;
	cout<<f(x,y)<<endl;
}