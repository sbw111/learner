#include<iostream>
using namespace std;
long C(int m,int n)
{
	int i,j;
	long sum=1;
	j=m;
	for (i=1;i<=n;i++)
	{
		sum=sum*j; j--;
	}
	j=1;
	for (i=1;i<=n;i++)
	{
		sum=sum/j; j++;
	}
	return sum;
}
void main(){
	int m,n;
	cout<<"ÊäÈëm£¬n£º";
	cin>>m>>n;
	cout<<C(m,n)<<endl;
}